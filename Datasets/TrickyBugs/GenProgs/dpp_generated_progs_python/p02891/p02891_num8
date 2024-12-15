def min_operations(S, K):
    # Find the length of the string
    length = len(S)

    # Count the number of adjacent characters in S
    adj_count = 0
    for i in range(length - 1):
        if S[i] == S[i + 1]:
            adj_count += 1

    # If S has no adjacent characters, no operations are needed
    if adj_count == 0:
        return 0
    
    # If all characters in S are the same, only 1 operation is needed
    if length == adj_count:
        return 1

    # Calculate the minimum number of operations
    operations = adj_count * K

    # If K is odd and there are still adjacent characters in T,
    # an additional operation is needed for the last character
    if K % 2 != 0 and adj_count > 0:
        operations += 1

    return operations

# Read input from stdin
S = input()
K = int(input())

# Print the minimum number of operations required
print(min_operations(S, K))