MOD = 10**9 + 7

def count_sequences(N, K, s):
    dp = [[[[0 for _ in range(70)] for _ in range(70)] for _ in range(70)] for _ in range(2)]
    dp[0][0][0][0] = 1

    for i in range(K):
        for j in range(2):
            for k in range(N+1):
                for l in range(N+1):
                    for m in range(N+1):
                        dp[i+1][j][k][l] += dp[i][j][k][l]
                        dp[i+1][j][k][l] %= MOD

                        if s[i] == 'r':
                            if k + l + m < N:
                                dp[i+1][j][k+1][l+m] += dp[i][j][k][l]
                                dp[i+1][j][k+1][l+m] %= MOD
                            if j == 0:
                                if k + l + m == N:
                                    dp[i+1][1][l+m][0] += dp[i][j][k][l]
                                    dp[i+1][1][l+m][0] %= MOD
                        else:
                            if k + l + m == N:
                                dp[i+1][j][l+m][0] += dp[i][j][k][l]
                                dp[i+1][j][l+m][0] %= MOD

    ans = 0
    for j in range(2):
        for k in range(N+1):
            for l in range(N+1):
                ans += dp[K][j][k][l]
                ans %= MOD
    return ans

N, K = map(int, input().split())
s = input()

result = count_sequences(N, K, s)
print(result)
