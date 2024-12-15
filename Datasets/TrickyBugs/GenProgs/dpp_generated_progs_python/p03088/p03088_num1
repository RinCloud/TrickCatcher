mod = 1000000007

def count_strings(N):
    dp = [[[[0] * 4 for _ in range(4)] for _ in range(4)] for _ in range(N+1)]
    dp[0][3][3][3] = 1

    # Initialize the forbidden substrings
    forbidden = [[0] * 4 for _ in range(4)]
    forbidden[0][1] = 1
    forbidden[1][0] = 1
    forbidden[0][2] = 1
    forbidden[2][0] = 1
    forbidden[1][2] = 1
    forbidden[2][1] = 1
    forbidden[1][3] = 1
    forbidden[3][1] = 1
    forbidden[2][3] = 1
    forbidden[3][2] = 1

    for i in range(N):
        for j in range(4):
            for k in range(4):
                for l in range(4):
                    if not dp[i][j][k][l]:
                        continue

                    for m in range(4):
                        if forbidden[k][l] and forbidden[j][l] and forbidden[l][m]:
                            continue

                        dp[i+1][k][l][m] += dp[i][j][k][l]
                        dp[i+1][k][l][m] %= mod

    ans = 0
    for i in range(4):
        for j in range(4):
            for k in range(4):
                ans += dp[N][i][j][k]
                ans %= mod

    return ans

# Getting input
N = int(input())

# Getting the number of strings of length N that satisfy the conditions
result = count_strings(N)

# Printing the result
print(result)