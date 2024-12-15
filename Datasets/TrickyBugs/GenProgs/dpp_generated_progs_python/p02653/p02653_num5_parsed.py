def count_different_strings(N, A, B):
    MOD = 10**9 + 7
    dp = [0] * (N+1)
    dp[0] = 1
    
    for i in range(N+1):
        if i - A >= 0:
            dp[i] += dp[i-A]
        if i - B >= 0:
            dp[i] += dp[i-B]
        dp[i] %= MOD
    
    return dp[N]

N, A, B = map(int, input().split())
result = count_different_strings(N, A, B)
print(result)