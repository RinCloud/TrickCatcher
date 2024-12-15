
MOD = 10**9 + 7


def solve(n, k):
    dp = [[0] * (k + 1) for _ in range(n + 1)]
    dp[0][0] = 1
    for i in range(1, n + 1):
        for j in range(k + 1):
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1] * (i - 1)) % MOD
    return dp[n][k]


def main():
    n, k = map(int, input().split())
    for i in range(1, k + 1):
        print(solve(n - k + 1, i))


if __name__ == "__main__":
    main()

