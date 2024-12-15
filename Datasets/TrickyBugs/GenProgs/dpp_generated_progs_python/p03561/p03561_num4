#PROGRAM:
import math

def find_lex_smallest_seq(K, N):
    X = K ** N  # Total number of sequences listed in FEIS
    
    # Calculate the (X/2)-th sequence index (rounded up)
    seq_index = math.ceil(X/2)
    
    sequence = []
    
    # Convert the sequence index to base K to find the lexicographically smallest sequence
    for i in range(N):
        digit = seq_index % K  # Calculate the digit at position i
        sequence.insert(0, digit)  # Insert the digit at the beginning of the sequence
        seq_index = seq_index // K  # Update the sequence index
    
    # Print the lexicographically smallest sequence
    print(*sequence)

# Read input from standard input
K, N = map(int, input().split())

# Call the function to find the lexicographically smallest sequence
find_lex_smallest_seq(K, N)