import sys

# Read input
N = int(sys.stdin.readline().strip())
A = list(map(int, sys.stdin.readline().strip().split()))

# Calculate sum
sum = 0
for i in range(N-1):
    for j in range(i+1, N):
        sum += A[i] * A[j]

# Modulo operation
sum = sum % (10**9 + 7)

# Print output
print(sum)