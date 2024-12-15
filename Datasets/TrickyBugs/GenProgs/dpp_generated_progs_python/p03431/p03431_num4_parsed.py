# Generating the Python program:

code = '''
MOD = 998244353

def calculate_ways(N, K):
    dp = [[0] * (K+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(1, N+1):
        for j in range(K+1):
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD
            if j >= i:
                dp[i][j] = (dp[i][j] + dp[i][j-i]) % MOD

    return dp[N][K]

N, K = map(int, input().split())
ways = calculate_ways(N, K)
print(ways)
'''

print(code)