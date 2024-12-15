import sys


def main():
    # Read input
    h, w, k = map(int, input().split())

    # Initialize dp table
    dp = [[0] * (w + 2) for _ in range(h + 1)]
    dp[0][1] = 1

    # Calculate dp
    for i in range(h):
        for j in range(1, w + 1):
            dp[i + 1][j] = dp[i][j - 1] * dp[i][j + 1] + dp[i][j] * dp[i][j + 1]

            dp[i + 1][j] %= 1000000007

    # Print result
    print(dp[h][k])


if __name__ == "__main__":
    main()