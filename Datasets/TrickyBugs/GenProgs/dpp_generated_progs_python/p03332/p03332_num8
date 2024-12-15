import sys

MOD = 998244353

def count_painting_ways(N, A, B, K):
    dp = [[0] * (K+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(K+1):
            if dp[i][j]:
                for k in range(4):
                    if k == 0 and j+A <= K:
                        dp[i+1][j+A] += dp[i][j]
                        dp[i+1][j+A] %= MOD
                    elif k == 1 and j+B <= K:
                        dp[i+1][j+B] += dp[i][j]
                        dp[i+1][j+B] %= MOD
                    elif k == 2 and j+A+B <= K:
                        dp[i+1][j+A+B] += dp[i][j]
                        dp[i+1][j+A+B] %= MOD
                    elif k == 3 and j <= K:
                        dp[i+1][j] += dp[i][j]
                        dp[i+1][j] %= MOD

    return dp[N][K]

if __name__ == "__main__":
    N, A, B, K = map(int, input().split())

    result = count_painting_ways(N, A, B, K)
    print(result)