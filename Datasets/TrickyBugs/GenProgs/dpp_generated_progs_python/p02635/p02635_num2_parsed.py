import sys

MOD = 998244353

def count_strings(s, k):
    n = len(s)
    dp = [[0] * (k+1) for _ in range(n+1)]
    dp[0][0] = 1

    for i in range(1, n+1):
        dp[i][0] = (dp[i-1][0] * 2) % MOD

    for i in range(1, n+1):
        for j in range(1, k+1):
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD

    ans = dp[n][k]

    return ans

def main():
    s, k = sys.stdin.readline().strip().split()
    k = int(k)
    result = count_strings(s, k)
    print(result)

if __name__ == "__main__":
    main()