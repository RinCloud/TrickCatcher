from itertools import product

def count_integers(N, X, A):
    mod = 998244353
    dp = [[0] * (1<<N) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(N):
        for j in range(1<<N):
            dp[i+1][j] = (dp[i+1][j] + dp[i][j] * X) % mod
            
            for k in range(N):
                if j & (1<<k):
                    dp[i+1][j] = (dp[i+1][j] + dp[i][j ^ (1<<k)] * (A[i] ^ A[k])) % mod
    
    res = 0
    for j in range(1<<N):
        cnt = bin(j).count('1')
        res += dp[N][j] * pow(X, N-cnt, mod)
        res %= mod
        
    return res

# read input
N, X = map(int, input().split())
A = [int(input(), 2) for _ in range(N)]

# call the function and print the result
result = count_integers(N, X, A)
print(result)