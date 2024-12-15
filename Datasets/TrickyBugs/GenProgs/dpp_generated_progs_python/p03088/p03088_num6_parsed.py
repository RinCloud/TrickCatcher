MOD = int(1e9 + 7)

def count_strings(N):
    dp = [[[None] * 4 for _ in range(4)] for _ in range(4)]
    # Initialize the DP table
    for i in range(4):
        for j in range(4):
            for k in range(4):
                if i == 0 and j == 0 and k == 0:
                    dp[i][j][k] = 1
                elif i == 0 and j == 0 and k == 1:
                    dp[i][j][k] = 1
                elif i == 0 and j == 1 and k == 0:
                    dp[i][j][k] = 1
                elif i == 0 and j == 2 and k == 0:
                    dp[i][j][k] = 1
                else:
                    dp[i][j][k] = 0

    for n in range(4, N + 1):
        temp = [[[0] * 4 for _ in range(4)] for _ in range(4)]
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    for x in range(4):
                        if j == 0 and k == 1 and x == 2:
                            continue
                        if j == 0 and k == 2 and x == 1:
                            continue
                        if j == 1 and k == 0 and x == 2:
                            continue
                        if i == 0 and k == 0 and x == 1:
                            continue
                        if i == 0 and j == 0 and x == 1:
                            continue
                        temp[j][k][x] = (temp[j][k][x] + dp[i][j][k]) % MOD

        for i in range(4):
            for j in range(4):
                for k in range(4):
                    dp[i][j][k] = temp[i][j][k]

    ans = 0
    for i in range(4):
        for j in range(4):
            for k in range(4):
                ans = (ans + dp[i][j][k]) % MOD
        
    return ans

N = int(input())
print(count_strings(N))