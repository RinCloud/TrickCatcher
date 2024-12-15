import sys
from itertools import product

# Read input
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

# Calculate K values
K_values = [sum(product(A[:i+1], A[i+1:j+1])) for i, j in product(range(2**N-1), repeat=2)]
K_values = K_values if N > 1 else [K_values[0]]

# Output
for value in K_values:
    print(value)