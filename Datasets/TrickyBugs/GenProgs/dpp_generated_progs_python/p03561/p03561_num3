from math import ceil

def lexicographically_smallest_sequence(K, N):
    X = pow(K, N)  # Total number of sequences listed in FEIS
    half_X = ceil(X/2)  # The (X/2)-th (rounded up to the nearest integer)

    # Construct the lexicographically smallest sequence
    sequence = []
    for i in range(N):
        sequence.append(half_X % K + 1)
        half_X //= K

    return sequence

# Read inputs
K, N = map(int, input().split())

# Get and print the lexicographically smallest sequence
sequence = lexicographically_smallest_sequence(K, N)
print(*sequence)