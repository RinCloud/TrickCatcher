import sys

# Read input
N = int(input())
A = list(map(int, input().split()))

# Compute the sum
mod = 10**9 + 7
total_sum = 0
for i in range(N - 1):
    for j in range(i + 1, N):
        total_sum = (total_sum + A[i] * A[j]) % mod

# Print the result
print(total_sum)