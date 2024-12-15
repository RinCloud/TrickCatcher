# Program:

MOD = 1000000007

def count_patterns(n, m, k):
    dp = [[[0] * 3 for _ in range(k + 1)] for _ in range(m + 1)]
    dp[m][k][0] = dp[m][k][1] = dp[m][k][2] = 1
    for i in range(m, -1, -1):
        for j in range(k, -1, -1):
            for x in range(3):
                if i < m:
                    dp[i][j][x] += dp[i + 1][j][(x + 2) % 3]
                if j < k:
                    dp[i][j][x] += dp[i][j + 1][(x + 1) % 3]
                dp[i][j][x] %= MOD
    ans = 0
    for i in range(n, -1, -1):
        ans += dp[0][0][(i + 1) % 3]
        ans %= MOD
    return ans

n, m, k = map(int, input().split())
print(count_patterns(n, m, k))