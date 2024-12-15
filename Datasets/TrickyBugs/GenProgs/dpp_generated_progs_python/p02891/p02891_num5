def min_operations(S, K):
    # Get the length of string S
    n = len(S)

    # Calculate the minimum number of operations
    operations = 0

    # If K is odd, we need to change every character
    if K % 2 != 0:
        operations += n * (K // 2)

    # If K is even, we only need to change half of the characters
    else:
        operations += n * K // 2 - n // 2

    # Return the minimum number of operations
    return operations

# Read the input
S = input()
K = int(input())

# Print the result
print(min_operations(S, K))