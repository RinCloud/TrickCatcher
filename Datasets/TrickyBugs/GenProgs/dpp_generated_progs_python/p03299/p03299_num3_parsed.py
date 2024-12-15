import sys

def count_ways(N, heights):
    MOD = 1000000007

    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(N+1):
            if j > heights[i]:
                dp[i+1][j] = (dp[i+1][j] + dp[i][j-1]) % MOD
            if j < heights[i]:
                dp[i+1][j] = (dp[i+1][j] + dp[i][j+1]) % MOD
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % MOD

    return dp[N][0]

def main():
    N = int(sys.stdin.readline())
    heights = list(map(int, sys.stdin.readline().split()))

    result = count_ways(N, heights)
    print(result)

if __name__ == '__main__':
    main()