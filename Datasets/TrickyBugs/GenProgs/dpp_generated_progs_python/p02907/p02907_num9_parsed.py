def expectation(N, prob):
    MOD = 998244353
    dp = [[[0] * (401) for _ in range(401)] for _ in range(401)]
    dp[0][0][0] = 1
    for i in range(N):
        a, b = prob[i]
        for j in range(401):
            for k in range(401):
                for l in range(401):
                    dp[i + 1][j][k] += dp[i][j][k]
                    dp[i + 1][j][k] %= MOD
                    if j + 1 <= a:
                        dp[i + 1][j + 1][max(k, l + (a - j))] += dp[i][j][k]
                        dp[i + 1][j + 1][max(k, l + (a - j))] %= MOD
                    if k + 1 <= b:
                        dp[i + 1][j][k + 1] += dp[i][j][k]
                        dp[i + 1][j][k + 1] %= MOD
    res = 0
    for i in range(401):
        for j in range(401):
            res += dp[N][i][j]
            res %= MOD
    return res


N = int(input())
prob = []
for _ in range(N):
    a, b = map(int, input().split())
    prob.append((a, b))

ans = expectation(N, prob)
print(ans)