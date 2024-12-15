def count_valid_strings(N):
    if N < 3:
        return N * N * N

    dp = [[[[0 for _ in range(4)] for _ in range(4)] for _ in range(4)] for _ in range(N + 1)]
    mod = int(1e9) + 7
    
    for i in range(4):
        for j in range(4):
            for k in range(4):
                dp[3][i][j][k] = 1
                if i == 0 and j == 1 and k == 2:
                    dp[3][i][j][k] = 0

    for n in range(4, N + 1):
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    for l in range(4):
                        if j == 0 and k == 1 and l == 2: 
                            continue
                        if j == 1 and k == 0 and l == 2: 
                            continue
                        if i == 0 and k == 1 and l == 2: 
                            continue
                        if i == 0 and j == 1 and l == 2: 
                            continue
                        dp[n][j][k][l] += dp[n - 1][i][j][k]
                        dp[n][j][k][l] %= mod

    count = 0
    for i in range(4):
        for j in range(4):
            for k in range(4):
                count += dp[N][i][j][k]
                count %= mod

    return count


if __name__ == "__main__":
    N = int(input())
    result = count_valid_strings(N)
    print(result)