def count_ways(N, M, broken):
    dp = [0] * (N+1)
    dp[0] = 1
    for i in range(1, N+1):
        if i in broken:
            continue
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000007
    return dp[N]

# Read input
N, M = map(int, input().split())
broken = set()
for _ in range(M):
    a = int(input())
    broken.add(a)

# Call the function and print the result
result = count_ways(N, M, broken)
print(result)