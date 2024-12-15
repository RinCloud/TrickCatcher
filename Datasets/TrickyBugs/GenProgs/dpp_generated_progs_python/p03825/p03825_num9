import sys

MOD = 10**9 + 7

def solve(N, M, K):
    dp = [[0] * (M + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N + 1):
        for j in range(M + 1):
            for k in range(1, K):
                if i + k <= N:
                    dp[i + k][j] += dp[i][j] * (M - j) % MOD
                    dp[i + k][j] %= MOD
            for k in range(1, K):
                if j + k <= M:
                    dp[i][j + k] += dp[i][j] * (N - i) % MOD
                    dp[i][j + k] %= MOD

    return dp[N][M]

def main():
    N, M, K = map(int, sys.stdin.readline().strip().split())
    answer = solve(N, M, K)
    print(answer)

if __name__ == '__main__':
    main()