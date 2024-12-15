MOD = 10**9 + 7

def count_ways(n, m, broken):
    dp = [0] * (n + 1)
    dp[0] = 1

    for i in range(1, n + 1):
        if i in broken:
            dp[i] = 0
        else:
            if i - 1 >= 0:
                dp[i] += dp[i - 1]
            if i - 2 >= 0:
                dp[i] += dp[i - 2]
            dp[i] %= MOD

    return dp[n]

N, M = map(int, input().split())
a = [int(input()) for _ in range(M)]
print(count_ways(N, M, a))