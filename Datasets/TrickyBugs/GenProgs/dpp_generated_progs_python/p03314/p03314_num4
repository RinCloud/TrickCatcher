MOD = 10**9+7

def solve(N, K, M, A):
    dp = [[0] * (K+1) for _ in range(N+1)]
    for a in A:
        dp[1][a] += 1
    
    for i in range(2, N+1):
        for j in range(1, K+1):
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD
    
    ans = 0
    for i in range(1, N+1):
        for j in range(1, K+1):
            ans = (ans + dp[i][j]) % MOD
    
    return ans

if __name__ == '__main__':
    N, K, M = map(int, input().split())
    A = list(map(int, input().split()))
    ans = solve(N, K, M, A)
    print(ans)