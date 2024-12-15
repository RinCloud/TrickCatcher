# Let's start by writing the main function to solve the problem:

def count_integers(N, X, A):
    mod = 998244353
    dp = [[[0] * 2 for _ in range(2)] for _ in range(4002)]
    A = [int(x, 2) for x in A]
    A.sort(reverse=True)
    num = 0
    for i in range(N):
        num |= A[i]
        if num <= X:
            dp[i][0][0] = (dp[i][0][0] + 1) % mod
        else:
            break
    for i in range(1, N + 1):
        for j in range(4001):
            dp[i][0][j] = (dp[i - 1][0][j] + dp[i - 1][1][j]) % mod
        for j in range(4001):
            if (A[i - 1] << 1) & X:
                dp[i][1][j] = (dp[i][1][j] + dp[i - 1][0][j]) % mod
            else:
                dp[i][0][j] = (dp[i][0][j] + dp[i - 1][0][j]) % mod
            if (A[i - 1] << 1) <= X:
                dp[i][1][j ^ (A[i - 1] << 1)] = (dp[i][1][j ^ (A[i - 1] << 1)] + dp[i - 1][1][j]) % mod
    result = sum(dp[N][0]) % mod
    return result