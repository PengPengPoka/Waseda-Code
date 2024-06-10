import csv
from scipy.cluster.hierarchy import average, to_tree
from Bio import Phylo
from Bio.Phylo.TreeConstruction import DistanceMatrix, DistanceTreeConstructor

def read_matrix(filename):
    names = []
    matrix = []
    
    with open(filename, 'r') as file:
        reader = csv.reader(file)
        header = next(reader)

        for head in header:
            if head:
                names.append(head)

        for row in reader:
            matrix_row = []
            for val in row[:len(matrix)+1]:
                try:
                    matrix_row.append(float(val))
                except ValueError:
                    matrix_row.append(float('inf'))
            matrix.append(matrix_row)

        return names, matrix
    
def tree(names, matrix, method):
    distance = DistanceMatrix(names,matrix)
    tree_constructor = DistanceTreeConstructor()
    if method.lower() == "upgma":
        tree = tree_constructor.upgma(distance)
    elif method.lower() == "nj":
        tree = tree_constructor.nj(distance)
    else:
        print("method is upgma or nj")
        exit()

    return tree    

def save_tree(tree, filename):
    Phylo.write(tree, filename, 'newick')

def main():
    file_input = "Distance_data.csv"
    method = input("phylogenetic tree method: ")
    file_output = input("name of output file: ")

    names, matrix = read_matrix(file_input)
    phylo_tree = tree(names,matrix,method)
    save_tree(phylo_tree,(file_output + ".nwk"))

main()