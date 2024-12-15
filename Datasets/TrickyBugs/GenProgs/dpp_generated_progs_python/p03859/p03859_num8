import math

def count_possible_values(N, M, S, operations):
    MOD = 1000000007
    dp = [[0] * N for _ in range(M + 1)]
    dp[0][0] = 1

    for i in range(1, M+1):
        cnt = [0] * N
        for j in range(N):
            cnt[j] = (cnt[j - 1] if j else 0) + (dp[i - 1][j] if j else 0)
            cnt[j] %= MOD

        for l, r in operations:
            dp[i][l - 1] += cnt[r - 1] - (cnt[l - 2] if l > 1 else 0)
            dp[i][l - 1] %= MOD

    return sum(dp[-1]) % MOD

N, M = map(int, input().split())
S = input()
operations = [list(map(int, input().split())) for _ in range(M)]

print(count_possible_values(N, M, S, operations))