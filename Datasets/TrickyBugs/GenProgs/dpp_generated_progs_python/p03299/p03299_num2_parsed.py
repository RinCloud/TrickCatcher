import sys

MOD = 10**9 + 7

def solve(N, h):
    dp = [[0] * 4 for _ in range(N)]
    dp[0][0] = 1
    dp[0][1] = 1
    dp[0][2] = 1
    dp[0][3] = 1

    for i in range(1, N):
        dp[i][0] = (dp[i-1][0] + dp[i-1][2] + dp[i-1][3]) % MOD
        dp[i][1] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][3]) % MOD
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % MOD
        dp[i][3] = (dp[i-1][0] + dp[i-1][1]) % MOD

    ans = 1
    for i in range(N):
        if h[i] != h[i-1]:
            ans = (ans * dp[i][3]) % MOD
        else:
            ans = (ans * dp[i][2]) % MOD

    return ans

def main():
    input=sys.stdin.readline
    N = int(input())
    h = list(map(int, input().split()))
    ans = solve(N, h)
    print(ans)

if __name__ == "__main__":
    main()