def count_ways(N, M, broken_steps):
    mod = 1000000007
    dp = [0] * (N+1)
    dp[0] = 1

    for i in range(1, N+1):
        if i not in broken_steps:
            dp[i] = (dp[i-1] + dp[i-2]) % mod

    return dp[N]

N, M = map(int, input().split())
broken_steps = []
for _ in range(M):
    broken_steps.append(int(input()))

count = count_ways(N, M, broken_steps)
print(count)