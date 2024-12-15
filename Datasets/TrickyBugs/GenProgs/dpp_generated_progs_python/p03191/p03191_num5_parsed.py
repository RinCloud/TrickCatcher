MOD = 10 ** 9 + 7

def solve(N, A):
    n = len(A) // 2
    dp = [[0] * 2 for _ in range(n)]
    dp[0][0] = 1
    if A[0] == -1 and A[1] == -1:
        dp[0][1] = 2
    elif A[0] == -1 or A[1] == -1:
        dp[0][1] = 1

    for i in range(1, n):
        if A[2 * i - 2] == -1 and A[2 * i - 1] == -1:
            dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) * 2 % MOD
        elif A[2 * i - 2] == -1 or A[2 * i - 1] == -1:
            dp[i][1] = dp[i - 1][1]
        dp[i][0] = (dp[i - 1][0] + dp[i][1]) % MOD

    return dp[n - 1][0]

N = int(input())
A = list(map(int, input().split()))

print(solve(N, A))