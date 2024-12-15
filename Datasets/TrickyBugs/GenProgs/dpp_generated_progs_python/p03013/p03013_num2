def count_ways(N, M, broken_steps):
    MOD = 1000000007
    
    dp = [0] * (N+1)
    dp[0] = 1
    
    for i in range(1, N+1):
        if i in broken_steps:
            continue
        if i-1 >= 0:
            dp[i] += dp[i-1]
        if i-2 >= 0:
            dp[i] += dp[i-2]
        dp[i] %= MOD
    
    return dp[N]


N, M = map(int, input().split())
broken_steps = set()
for _ in range(M):
    a = int(input())
    broken_steps.add(a)

ways = count_ways(N, M, broken_steps)
print(ways)