import sys

# Read input
N = int(sys.stdin.readline().strip())
A = list(map(int, sys.stdin.readline().strip().split()))

# Compute the sum
total = 0
MOD = int(1e9) + 7
for i in range(N-1):
    for j in range(i+1, N):
        total += A[i] * A[j]
        total %= MOD

# Print the result
print(total)