def affine_alignment(seq1, seq2, match=1, mismatch=-1, gap_open=-2, gap_extension=-1):
    scoring_matrix = {
        ('A', 'A'): 1, ('A', 'T'): -1, ('A', 'G'): -1, ('A', 'C'): -1,
        ('T', 'A'): -1, ('T', 'T'): 1, ('T', 'G'): -1, ('T', 'C'): -1,
        ('G', 'A'): -1, ('G', 'T'): -1, ('G', 'G'): 1, ('G', 'C'): -1,
        ('C', 'A'): -1, ('C', 'T'): -1, ('C', 'G'): -1, ('C', 'C'): 1
    }

    len1, len2 = len(seq1), len(seq2)
    if len1>100 or len2>100:
        print("input exceeds 100, exiting")
        exit()

    match = [[0] * (len2 + 1) for _ in range(len1 + 1)]
    gap1 = [[0] * (len2 + 1) for _ in range(len1 + 1)]
    gap2 = [[0] * (len2 + 1) for _ in range(len1 + 1)]

    for i in range(1, len1 + 1):
        match[i][0] = gap_open + (i - 1) * gap_extension
        gap1[i][0] = gap_open + (i - 1) * gap_extension
        gap2[i][0] = float('-inf')
    for j in range(1, len2 + 1):
        match[0][j] = gap_open + (j - 1) * gap_extension
        gap1[0][j] = float('-inf')
        gap2[0][j] = gap_open + (j - 1) * gap_extension

    for i in range(1, len1 + 1):
        for j in range(1, len2 + 1):
            match[i][j] = max(
                match[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])],
                gap1[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])],
                gap2[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]
            )
            gap1[i][j] = max(
                match[i - 1][j] + gap_open,
                gap1[i - 1][j] + gap_extension
            )
            gap2[i][j] = max(
                match[i][j - 1] + gap_open,
                gap2[i][j - 1] + gap_extension
            )

    # Traceback to get the aligned sequences
    align1, align2 = [], []
    i, j = len1, len2
    current_matrix = 'match'

    while i > 0 or j > 0:
        if current_matrix == 'match':
            if i > 0 and j > 0 and match[i][j] == match[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]:
                align1.append(seq1[i - 1])
                align2.append(seq2[j - 1])
                i -= 1
                j -= 1
            elif i > 0 and j > 0 and match[i][j] == gap1[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]:
                align1.append(seq1[i - 1])
                align2.append(seq2[j - 1])
                i -= 1
                j -= 1
                current_matrix = 'gap1'
            elif i > 0 and j > 0 and match[i][j] == gap2[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]:
                align1.append(seq1[i - 1])
                align2.append(seq2[j - 1])
                i -= 1
                j -= 1
                current_matrix = 'gap2'
        elif current_matrix == 'gap1':
            if gap1[i][j] == match[i - 1][j] + gap_open:
                align1.append(seq1[i - 1])
                align2.append('-')
                i -= 1
                current_matrix = 'match'
            else:
                align1.append(seq1[i - 1])
                align2.append('-')
                i -= 1
        elif current_matrix == 'gap2':
            if gap2[i][j] == match[i][j - 1] + gap_open:
                align1.append('-')
                align2.append(seq2[j - 1])
                j -= 1
                current_matrix = 'match'
            else:
                align1.append('-')
                align2.append(seq2[j - 1])
                j -= 1

    align1.reverse()
    align2.reverse()

    return match[len1][len2], ''.join(align1), ''.join(align2)

def main():
    seq1 = 'GATTACATCAG'
    seq2 = 'GCATGCACAAGGT'

    align_score, align1, align2 = affine_alignment(seq1,seq2)
    print(align_score)
    print(align1)
    print(align2)

main()