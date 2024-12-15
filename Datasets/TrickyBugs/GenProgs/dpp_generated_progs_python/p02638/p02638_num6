from math import factorial

# Read the input
N, K, P = map(int, input().split())

# Calculate the number of valid directed graphs modulo P
num_graphs = factorial(N - 1) // (factorial(K) * factorial(N - 1 - K))
num_graphs %= P

# Print the result
print(num_graphs)