def find_number_of_sequences(N, K, s):
    mod = 10**9 + 7
    dp = [[0]*(K+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(1, N+1):
        dp[i][0] = dp[i-1][0] * 2

    for i in range(1, N+1):
        for j in range(1, K+1):
            for k in range(i, 0, -1):
                if s[j-1] == 'r':
                    dp[i][j] = (dp[i][j] + dp[k-1][j-1]) % mod
                else:
                    dp[i][j] = (dp[i][j] + dp[k-1][j-1] + dp[i][j-1]) % mod

    return dp[N][K]
    
N, K = map(int, input().split())
s = input().strip()
result = find_number_of_sequences(N, K, s)
print(result)