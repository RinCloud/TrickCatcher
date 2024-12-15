import sys

def main():
    # read input
    N = int(input())
    h = list(map(int, input().split()))

    # initialize dp table
    dp = [[0] * (max(h) + 2) for _ in range(N)]
    MOD = 10**9 + 7

    # base case
    dp[0][h[0]] = 1

    # dynamic programming
    for i in range(1, N):
        # calculate prefix sum
        s = [0] * (max(h) + 2)
        for j in range(1, max(h) + 2):
            s[j] = (s[j - 1] + dp[i - 1][j - 1]) % MOD

        for j in range(1, h[i] + 2):
            dp[i][j] = (s[j] + s[j + 1]) % MOD

    # calculate the final answer
    ans = sum(dp[N - 1]) % MOD

    # print the result
    print(ans)

if __name__ == '__main__':
    main()