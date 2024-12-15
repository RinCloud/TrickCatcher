# Complete Python program

MOD = 10**9 + 7

# Function to find maximum product modulo MOD
def find_max_product(N, K, A):
    # Sort the list of integers in non-decreasing order
    A.sort()

    # Initialize product to 1
    product = 1

    # Case where all integers are non-negative
    if A[-1] >= 0:
        for i in range(N-K, N):
            product = (product * A[i]) % MOD

    # Case where all integers are negative
    elif A[0] < 0:
        # If K is odd, consider the absolute value of the smallest negative integer
        if K % 2 == 1:
            product = A[0]

        # Consider the product of the largest K non-negative integers
        for i in range(N-1, N-K-1, -1):
            product = (product * A[i]) % MOD

    # Case where both positive and negative integers are present
    else:
        # Find the indices of the first non-negative and negative integers
        non_negative_index = 0
        while non_negative_index < N and A[non_negative_index] < 0:
            non_negative_index += 1
        negative_index = non_negative_index - 1
        
        # Consider the product of the largest K non-negative integers
        for i in range(N-1, N-K-1, -1):
            if non_negative_index >= N or (negative_index >= 0 and abs(A[negative_index]) > A[non_negative_index]):
                product = (product * A[negative_index]) % MOD
                negative_index -= 1
            else:
                product = (product * A[non_negative_index]) % MOD
                non_negative_index += 1

    return product

# Read input from Standard Input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Find the maximum product modulo MOD
max_product = find_max_product(N, K, A)

# Print the maximum product modulo MOD
print(max_product)