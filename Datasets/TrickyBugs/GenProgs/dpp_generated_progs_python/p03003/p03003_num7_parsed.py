import sys

MOD = 10**9 + 7

def main():
    # Read input from standard input
    n, m = map(int, input().split())
    S = list(map(int, input().split()))
    T = list(map(int, input().split()))

    # Initialize dp table
    dp = [[0] * (m + 1) for _ in range(n + 1)]
    for i in range(n + 1):
        dp[i][0] = 1
    for j in range(m + 1):
        dp[0][j] = 1

    # Iterate through each pair of subsequences
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if S[i-1] == T[j-1]:
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] + 1) % MOD
            else:
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]) % MOD

    # Print result
    print(dp[n][m])

if __name__ == "__main__":
    main()