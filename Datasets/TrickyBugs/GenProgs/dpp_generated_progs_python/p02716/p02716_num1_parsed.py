import sys

def max_sum_chosen_elements(N, A):
    if N <= 2:
        return max(A)
    
    dp = [0] * N
    dp[0] = A[0]
    dp[1] = max(A[0], A[1])
    
    for i in range(2, N):
        dp[i] = max(dp[i-1], dp[i-2] + A[i])
    
    return dp[-1]

N = int(input())
A = list(map(int, input().split()))

print(max_sum_chosen_elements(N, A))