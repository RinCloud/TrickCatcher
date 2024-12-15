# Helper function to calculate the number of sequences
def count_sequences(N, K):
    # Initialize a list to store the number of sequences for each length
    sequences = [0] * (K + 1)
    
    # For length 1, there is only one sequence
    sequences[1] = 1
    
    # For lengths greater than 1
    for i in range(2, K + 1):
        # Calculate the number of sequences based on the previous lengths
        sequences[i] = (sequences[i - 1] * N - sequences[i - 2]) % (10 ** 9 + 7)
    
    return sequences[K]

# Read the input
N, K = map(int, input().split())

# Calculate and print the number of sequences
print(count_sequences(N, K))