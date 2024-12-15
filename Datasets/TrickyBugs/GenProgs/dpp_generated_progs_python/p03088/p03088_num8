MOD = 10**9+7

def count_strings(N):
    dp = [[[[0] * 4 for _ in range(4)] for _ in range(4)] for _ in range(N+1)]
    dp[0][3][3][3] = 1

    for n in range(1, N+1):
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    for l in range(4):
                        if check_valid(i, j, k, l):
                            dp[n][j][k][l] = (dp[n][j][k][l] + dp[n-1][i][j][k]) % MOD

    count = 0
    for i in range(4):
        for j in range(4):
            for k in range(4):
                count = (count + dp[N][i][j][k]) % MOD

    return count

def check_valid(i, j, k, l):
    if (j == 0 and k == 1 and l == 2) or (j == 1 and k == 0 and l == 2) or (j == 0 and k == 2 and l == 1) or (i == 0 and j == 1 and l == 2) or (i == 0 and k == 1 and l == 2):
        return False    
    return True

N = int(input())
result = count_strings(N)
print(result)