```python
import math

def min_coins_to_reach_n(N, A, B, C, D):
    dp = [0] * (N+1)
    for i in range(2, N+1):
        dp[i] = dp[i-1] + D
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i//2] + A)
        if i % 3 == 0:
            dp[i] = min(dp[i], dp[i//3] + B)
        if i % 5 == 0:
            dp[i] = min(dp[i], dp[i//5] + C)
    return dp[N]

T = int(input())
for _ in range(T):
    N, A, B, C, D = map(int, input().split())
    result = min_coins_to_reach_n(N, A, B, C, D)
    print(result)