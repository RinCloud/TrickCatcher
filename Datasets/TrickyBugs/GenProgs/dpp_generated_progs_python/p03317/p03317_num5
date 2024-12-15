# Implementation of the minimum number of operations required to make all elements in the sequence equal

def min_operations_required(N, K, A):
    # Initialize the counter for the minimum number of operations
    operations = 0

    # Iterate through the elements of the sequence
    for i in range(N):
        # Calculate the number of operations required for the current element
        operations += 1 if i == 0 else 1 if (A[i] - A[i-1]) % K != 0 else 0

    # Return the minimum number of operations required
    return operations

# Read the input from standard input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Call the function to calculate the minimum number of operations required
result = min_operations_required(N, K, A)

# Print the result
print(result)