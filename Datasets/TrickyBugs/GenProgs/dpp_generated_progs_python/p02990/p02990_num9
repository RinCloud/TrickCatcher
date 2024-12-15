# Program:

def count_ways(N, K):
    MOD = 10**9 + 7
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(K + 1):
            dp[i + 1][j] += dp[i][j]
            dp[i + 1][j] %= MOD
            if j + 1 <= K:
                dp[i + 1][j + 1] += dp[i][j]
                dp[i + 1][j + 1] %= MOD

    ways = [0] * K
    for i in range(1, K + 1):
        for j in range(N - K, N + 1):
            ways[i - 1] += dp[j][i]
            ways[i - 1] %= MOD

    return ways


if __name__ == "__main__":
    N, K = map(int, input().split())
    ways = count_ways(N, K)
    for w in ways:
        print(w)