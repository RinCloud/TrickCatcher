def count_sequences(N, M):
    MOD = 10**9 + 7
    dp = [0] * (M + 1)
    dp[1] = 1
    
    for i in range(2, M + 1):
        dp[i] = (dp[i - 1] + (dp[i - 2] if i % 2 == 0 else 0)) % MOD
    
    result = 1
    while M != 1:
        cnt = 0
        while M % dp[cnt + 1] == 0:
            cnt += 1
        result = (result * dp[cnt]) % MOD
        M //= dp[cnt]
    
    return result

N, M = map(int, input().split())
print(count_sequences(N, M))