# Python program to find the (X/2)-th lexicographically smallest sequence

def find_lexicographically_smallest_sequence(K, N):
    # Calculate the total number of sequences
    X = K ** N

    # Calculate the (X/2)-th (rounded up) lexicographically smallest sequence
    sequence = []
    for i in range(N-1, -1, -1):
        quotient = X // K
        remainder = X % K

        if remainder == 0:
            sequence.append(K)
            X = quotient
        else:
            sequence.append(remainder)
            X = quotient + 1

    # Print the sequence
    print(*sequence)

# Read the input values
K, N = map(int, input().split())

# Find and print the lexicographically smallest sequence
find_lexicographically_smallest_sequence(K, N)