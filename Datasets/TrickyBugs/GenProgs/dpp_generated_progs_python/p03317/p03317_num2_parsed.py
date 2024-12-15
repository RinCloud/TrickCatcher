# Generating Python program to achieve the intention

# Read input from standard input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Find the minimum number of operations required
operations = (N - 1) // (K - 1)

# Print the minimum number of operations required
print(operations)