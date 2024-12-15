def count_ways(n, m, broken_steps):
    mod = 1000000007
    dp = [0] * (n + 1)
    dp[0] = 1
    for i in range(1, n + 1):
        if i not in broken_steps:
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod
    return dp[n]

n, m = map(int, input().split())
broken_steps = [int(input()) for _ in range(m)]

result = count_ways(n, m, broken_steps)
print(result)