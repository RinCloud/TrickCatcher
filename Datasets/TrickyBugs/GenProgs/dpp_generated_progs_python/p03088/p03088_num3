import sys

MOD = 10**9 + 7

def count_strings(n):
    dp = [[[[0] * 4 for _ in range(4)] for _ in range(4)] for _ in range(n+1)]
    dp[0][0][0][0] = 1

    for i in range(1, n+1):
        for j in range(4):
            for k in range(4):
                for l in range(4):
                    for m in range(4):
                        if (j == 1 and k == 3 and l == 2) or (j == 1 and k == 2 and l == 3) or (j == 3 and k == 1 and l == 2) or (j == 1 and k == 3 and m == 2) or (j == 1 and l == 3 and m == 2):
                            continue
                        dp[i][k][l][m] = (dp[i][k][l][m] + dp[i-1][j][k][l]) % MOD

    result = 0
    for j in range(4):
        for k in range(4):
            for l in range(4):
                result = (result + dp[n][j][k][l]) % MOD

    return result

if __name__ == "__main__":
    n = int(sys.stdin.readline().strip())
    print(count_strings(n))