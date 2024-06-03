def linear_alignment(seq1, seq2, match=1, mismatch=-1, gap=2):
    scoring_matrix = {
        ('A', 'A'): 1, ('A', 'T'): -1, ('A', 'G'): -1, ('A', 'C'): -1,
        ('T', 'A'): -1, ('T', 'T'): 1, ('T', 'G'): -1, ('T', 'C'): -1,
        ('G', 'A'): -1, ('G', 'T'): -1, ('G', 'G'): 1, ('G', 'C'): -1,
        ('C', 'A'): -1, ('C', 'T'): -1, ('C', 'G'): -1, ('C', 'C'): 1
    }

    len1, len2 = len(seq1), len(seq2)
    if len1 > 100 or len2 > 100:
        print("input exceed 100, exiting")
        exit()

    score = [[0]*(len2+1) for _ in range(len1+1)]

    for i in range(len1+1):
        score[i][0] = i*-gap
    for j in range(len2+1):
        score[0][j] = j*-gap

    for i in range(1, len1 + 1):
        for j in range(1, len2 + 1):
            match = score[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]
            delete = score[i - 1][j] - gap
            insert = score[i][j - 1] - gap
            score[i][j] = max(match, delete, insert)

    align1, align2 = [], []
    i, j = len1, len2
    while i > 0 and j > 0:
        current_score = score[i][j]
        if current_score == score[i - 1][j - 1] + scoring_matrix[(seq1[i - 1], seq2[j - 1])]:
            align1.append(seq1[i - 1])
            align2.append(seq2[j - 1])
            i -= 1
            j -= 1
        elif current_score == score[i - 1][j] - gap:
            align1.append(seq1[i - 1])
            align2.append('-')
            i -= 1
        else:
            align1.append('-')
            align2.append(seq2[j - 1])
            j -= 1

    while i > 0:
        align1.append(seq1[i - 1])
        align2.append('-')
        i -= 1

    while j > 0:
        align1.append('-')
        align2.append(seq2[j - 1])
        j -= 1

    align1.reverse()
    align2.reverse()

    return score[len1][len2], ''.join(align1), ''.join(align2)

def main():
    seq1 = 'GATTACATCAG'
    seq2 = 'GCATGCACAAGGT'

    align_score, align1, align2 = linear_alignment(seq1,seq2)
    print(align_score)
    print(align1)
    print(align2)

main()