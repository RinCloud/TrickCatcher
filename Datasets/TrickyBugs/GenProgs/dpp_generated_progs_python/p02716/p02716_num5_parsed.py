from typing import List

def max_possible_sum(N: int, A: List[int]) -> int:
    dp = [0] * N
    dp[0] = A[0]
    dp[1] = max(A[0], A[1])
    
    for i in range(2, N):
        dp[i] = max(dp[i-1], dp[i-2] + A[i])
    
    return dp[-1]

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the maximum possible sum
print(max_possible_sum(N, A))