MOD = 1000000007

def count_possible_values(N, M, S, operations):
    dp = [[0] * (N + 1) for _ in range(M + 1)]
    dp[0][0] = 1
    
    for i in range(1, M + 1):
        for j in range(N + 1):
            dp[i][j] = dp[i - 1][j]
            for l, r in operations:
                if l <= j <= r:
                    dp[i][j] = (dp[i][j] + dp[i - 1][l - 1]) % MOD
    
    result = sum(dp[M]) % MOD
    return result

N, M = map(int, input().split())
S = input()
operations = []
for _ in range(M):
    l, r = map(int, input().split())
    operations.append((l, r))

result = count_possible_values(N, M, S, operations)
print(result)