MOD = 10**9 + 7

def count_strings(n):
    dp = [[[[0] * 4 for _ in range(4)] for _ in range(4)] for _ in range(n + 1)]
    dp[0][3][3][3] = 1

    for length in range(1, n + 1):
        for c1 in range(4):
            for c2 in range(4):
                for c3 in range(4):
                    for c4 in range(4):
                        if c1 == 0 and c3 == 2 and c4 == 1:
                            continue
                        if c1 == 0 and c2 == 2 and c4 == 1:
                            continue
                        if c2 == 0 and c3 == 2 and c4 == 1:
                            continue
                        if c1 == 2 and c3 == 0 and c4 == 1:
                            continue
                        if c1 == 0 and c3 == 1 and c4 == 2:
                            continue
                        dp[length][c2][c3][c4] += dp[length - 1][c1][c2][c3]
                        dp[length][c2][c3][c4] %= MOD

    ans = 0
    for c1 in range(4):
        for c2 in range(4):
            for c3 in range(4):
                ans += dp[n][c1][c2][c3]
                ans %= MOD

    return ans

n = int(input())
result = count_strings(n)
print(result)