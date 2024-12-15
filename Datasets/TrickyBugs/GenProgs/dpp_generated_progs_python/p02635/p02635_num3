import sys

def solve(S, K):
    N = len(S)
    MOD = 998244353
    
    dp = [[[0]*(N+1) for _ in range(N+1)] for _ in range(K+1)]
    dp[0][0][0] = 1
    
    for k in range(K):
        for i in range(N+1):
            for j in range(N+1):
                if dp[k][i][j] == 0:
                    continue
                
                if (i+j) == 0:
                    dp[k+1][i][j] = (dp[k+1][i][j] + dp[k][i][j]) % MOD
                
                for a in range(i+1, N+1):
                    if S[a-1] == '1':
                        break
                    
                    dp[k+1][i][a-i-1] = (dp[k+1][i][a-i-1] + dp[k][i][j]) % MOD
                
                for b in range(j+1, N+1):
                    if S[b-1] == '0':
                        break
                        
                    dp[k+1][j+b-j][b-j-1] = (dp[k+1][j+b-j][b-j-1] + dp[k][i][j]) % MOD
    
    ans = 0
    for i in range(N+1):
        for j in range(N+1):
            ans = (ans + dp[K][i][j]) % MOD
    
    return ans

if __name__ == "__main__":
    S, K = sys.stdin.readline().strip().split()
    K = int(K)
    print(solve(S, K))