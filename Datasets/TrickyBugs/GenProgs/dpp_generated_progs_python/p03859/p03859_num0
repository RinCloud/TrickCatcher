import math

MOD = 1000000007

def count_possible_values(N, M, S, operations):
    dp = [0] * (N + 1)
    dp[0] = 1

    for i in range(1, N + 1):
        for l, r in operations:
            if i >= l and i <= r:
                dp[i] += dp[i - 1]
                dp[i] %= MOD

    return dp[N]

N, M = map(int, input().split())
S = input()
operations = []
for i in range(M):
    l, r = map(int, input().split())
    operations.append((l, r))

result = count_possible_values(N, M, S, operations)
print(result)