import sys

MOD = 998244353

def solve(N, A, B, K):
    dp = [0] * (N+1)
    dp[0] = 1
    
    for i in range(1, N+1):
        dp[i] = (dp[i-1]*2) % MOD
    
    invA = pow(A, MOD-2, MOD)
    invB = pow(B, MOD-2, MOD)
    
    ans = 0
    for i in range(N+1):
        if (K-A*i) % B == 0:
            j = (K-A*i) // B
            if j <= N and j >= 0:
                ans = (ans + dp[i]*dp[j]) % MOD
    
    return ans

N, A, B, K = map(int, sys.stdin.readline().split())

result = solve(N, A, B, K)
print(result)