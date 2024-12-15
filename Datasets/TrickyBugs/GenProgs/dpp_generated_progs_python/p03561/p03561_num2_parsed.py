from itertools import product

def lexicographically_smallest_sequence(K, N):
    # Generate all possible sequences
    sequences = list(product(range(1, K+1), repeat=N))
    # Sort the sequences lexicographically
    sequences.sort()
    # Find the index of the middle sequence
    mid_index = len(sequences) // 2
    # Get the middle sequence
    middle_sequence = sequences[mid_index]
    # Print the middle sequence
    print(*middle_sequence)

# Read input from standard input
K, N = map(int, input().split())

# Call the function with the provided inputs
lexicographically_smallest_sequence(K, N)