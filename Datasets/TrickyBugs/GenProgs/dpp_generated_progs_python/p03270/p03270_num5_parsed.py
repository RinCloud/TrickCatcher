import sys

MOD = 998244353

def solve(K, N):
    dp = [[0] * (2 * K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(1, 2 * K + 1):
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1] - (dp[i - 1][j - K - 1] if j >= K + 1 else 0)
            dp[i][j] %= MOD

    ans = []
    for i in range(1, 2 * K):
        ans.append(dp[N][i])

    return ans

if __name__ == "__main__":
    K, N = map(int, sys.stdin.readline().split())
    result = solve(K, N)
    for i in result:
        print(i)