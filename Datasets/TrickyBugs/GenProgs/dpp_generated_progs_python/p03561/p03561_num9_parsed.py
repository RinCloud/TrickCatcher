# Program to find the (X/2)-th lexicographically smallest sequence listed in FEIS

def lexicographically_smallest_sequence(K, N):
    # Find X, the total number of sequences listed in FEIS
    X = pow(K, N)

    # Find the (X/2)-th sequence
    sequence = []
    count = 0

    # Generate all possible sequences and keep track of count
    for i in range(1, N+1):
        for j in range(1, K+1):
            sequence.append(str(j))
            count += 1

            if count >= X/2:
                return sequence

    return sequence

# Take input from the user
K, N = map(int, input().split())

# Call the function to find the lexicographically smallest sequence
result = lexicographically_smallest_sequence(K, N)

# Print the result
print(' '.join(result))