import sys

MOD = 10**9 + 7

def main():
    N, M = map(int, sys.stdin.readline().split())
    S = list(map(int, sys.stdin.readline().split()))
    T = list(map(int, sys.stdin.readline().split()))

    dp = [[0] * (M + 1) for _ in range(N + 1)]
    for i in range(1, N + 1):
        for j in range(1, M + 1):
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1]) % MOD
            if S[i - 1] == T[j - 1]:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + 1) % MOD

    print(dp[N][M])

if __name__ == '__main__':
    main()