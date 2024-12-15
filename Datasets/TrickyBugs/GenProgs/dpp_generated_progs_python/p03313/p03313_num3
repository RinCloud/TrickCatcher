import sys

def solve(N, A):
    max_prefix_sum = [0] * (2**N)
    max_value = [0] * (2**N)
    
    for i in range(1, 2**N):
        max_prefix_sum[i] = max(max_prefix_sum[i-1], A[i-1])
        max_value[i] = max(max_value[i], max_value[i-1], max_prefix_sum[i-1] + A[i])
    
    for K in range(1, 2**N):
        print(max_value[K])

# Read input
N = int(sys.stdin.readline().strip())
A = list(map(int, sys.stdin.readline().strip().split()))

# Solve the problem
solve(N, A)