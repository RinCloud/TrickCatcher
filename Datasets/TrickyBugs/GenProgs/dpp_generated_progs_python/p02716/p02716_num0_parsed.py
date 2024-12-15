from typing import List

def max_sum_chosen_elements(N: int, seq: List[int]) -> int:
    dp = [0] * N
    dp[0] = seq[0]
    dp[1] = max(seq[0], seq[1])
    
    for i in range(2, N):
        dp[i] = max(dp[i-2] + seq[i], dp[i-1])
    
    return dp[-1]

# Read input
N = int(input())
seq = list(map(int, input().split()))

# Call the function and print the result
print(max_sum_chosen_elements(N, seq))