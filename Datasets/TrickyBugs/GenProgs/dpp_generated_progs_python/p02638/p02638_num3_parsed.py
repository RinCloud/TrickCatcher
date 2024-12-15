import itertools
import math

def count_graphs(N, K, P):
    mod = 10**9 + 7

    def nCr(n, r):
        return math.factorial(n) // (math.factorial(r) * math.factorial(n - r))

    def count_permutations(n):
        dp = [[0] * (n + 1) for _ in range(n + 1)]
        dp[1][0] = 1
        dp[1][1] = 1
        for i in range(2, n + 1):
            dp[i][0] = 1
            for j in range(1, i + 1):
                dp[i][j] = (dp[i - 1][j - 1] * i + dp[i - 1][j]) % mod
        return dp[n]

    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    for i in range(1, N + 1):
        for j in range(1, K + 1):
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod

    ans = 0
    for i in range(1, K + 1):
        for k in range(1, N - i + 1):
            x = count_permutations(k)
            y = pow(dp[k][i], N - k, mod)
            ans += nCr(N, k) * x * y
            ans %= mod

    return ans % P

N, K, P = map(int, input().split())
print(count_graphs(N, K, P))