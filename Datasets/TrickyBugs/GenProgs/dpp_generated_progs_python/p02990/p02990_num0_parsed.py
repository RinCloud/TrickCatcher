import sys

MOD = 10**9 + 7

def main():
    N, K = map(int, sys.stdin.readline().split())

    # Calculate the number of ways to arrange the balls
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(K + 1):
            dp[i + 1][j] += dp[i][j]
            dp[i + 1][j] %= MOD
            if j < K:
                dp[i + 1][j + 1] += dp[i][j] * (N - i - 1)
                dp[i + 1][j + 1] %= MOD

    # Print the results
    for i in range(1, K + 1):
        print(dp[N][i])

if __name__ == "__main__":
    main()