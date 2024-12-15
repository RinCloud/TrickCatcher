import math

def count_permutations(N, K):
    mod = 924844033
    
    dp = [[0]*(N+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(i+1):
            if j <= i-1 and abs(i-j) != K:
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod
            if abs(i-j-1) != K:
                dp[i][j] = (dp[i][j] + dp[j][i-1]) % mod

    ans = 0
    for i in range(N+1):
        ans = (ans + dp[N][i]) % mod
        
    return ans

# Read input
N, K = map(int, input().split())

# Count permutations
ans = count_permutations(N, K)

# Print the answer modulo
print(ans)