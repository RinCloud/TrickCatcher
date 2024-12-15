MOD = 10**9 + 7

def count_possible_values(N, M, S, operations):
    dp = [[0] * (N+1) for _ in range(M+1)]
    dp[0][0] = 1
    for i in range(1, M+1):
        for j in range(N+1):
            dp[i][j] = dp[i-1][j]
        for j in range(operations[i-1][0], operations[i-1][1]+1):
            dp[i][j] += dp[i-1][j-1]
            dp[i][j] %= MOD
    ans = sum(dp[M]) % MOD
    return ans

# Reading input
N, M = map(int, input().split())
S = input().strip()
operations = []
for _ in range(M):
    l, r = map(int, input().split())
    operations.append((l, r))

# Invoking the function
result = count_possible_values(N, M, S, operations)

# Printing the result
print(result)