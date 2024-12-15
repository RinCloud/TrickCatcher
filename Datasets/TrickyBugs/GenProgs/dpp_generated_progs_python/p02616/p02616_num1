import sys

# Read N and K from input
N, K = map(int, sys.stdin.readline().split())

# Read the integers A from input
A = list(map(int, sys.stdin.readline().split()))

# Sort the integers in descending order
A.sort(reverse=True)

# Initialize the maximum product as 1
max_product = 1

# If all integers are negative, choose the K smallest integers
if A[0] < 0:
    for i in range(K):
        max_product *= A[N-i-1]
        max_product %= (10**9 + 7)
# Otherwise, choose the K largest integers
else:
    # Multiply the K largest integers in the sorted list
    for i in range(K):
        max_product *= A[i]
        max_product %= (10**9 + 7)

# Print the maximum product modulo (10^9 + 7)
print(max_product)