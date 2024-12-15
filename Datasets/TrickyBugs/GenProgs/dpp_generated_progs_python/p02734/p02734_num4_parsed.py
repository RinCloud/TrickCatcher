import sys

MOD = 998244353

def solve(N, S, A):
    dp = [[0] * (S+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(1, N+1):
        for j in range(S+1):
            dp[i][j] = dp[i-1][j]
            if j >= A[i-1]:
                dp[i][j] += dp[i-1][j - A[i-1]]
                dp[i][j] %= MOD

    ans = 0
    for i in range(N):
        for j in range(i+1, N+1):
            ans += dp[N][S]
            ans %= MOD

    return ans

def main():
    # Read input
    N, S = map(int, input().split())
    A = list(map(int, input().split()))

    # Solve the problem
    ans = solve(N, S, A)

    # Print the result
    print(ans)

if __name__ == "__main__":
    main()