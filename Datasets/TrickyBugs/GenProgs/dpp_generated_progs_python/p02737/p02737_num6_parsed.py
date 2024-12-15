def max_weight_independent_set():
    N = int(input())
    
    X = [[] for _ in range(N + 1)]
    Y = [[] for _ in range(N + 1)]
    Z = [[] for _ in range(N + 1)]
    
    M1 = int(input())
    for _ in range(M1):
        a, b = map(int, input().split())
        X[a].append(b)
        X[b].append(a)
    
    M2 = int(input())
    for _ in range(M2):
        c, d = map(int, input().split())
        Y[c].append(d)
        Y[d].append(c)
    
    M3 = int(input())
    for _ in range(M3):
        e, f = map(int, input().split())
        Z[e].append(f)
        Z[f].append(e)
    
    MOD = 998244353
    dp = [[[0] * (N + 1) for _ in range(N + 1)] for _ in range(N + 1)]
    
    for i in range(N, -1, -1):
        for j in range(N, -1, -1):
            for k in range(N, -1, -1):
                if i == N and j == N and k == N:
                    continue
                total_weight = pow(10, 18 * (i + j + k), MOD)
                exclude = dp[i + 1][j][k] + dp[i][j + 1][k] + dp[i][j][k + 1]
                
                for u in X[i+1]:
                    exclude += dp[u][j][k]
                
                for v in Y[j+1]:
                    exclude += dp[i][v][k]
                
                for w in Z[k+1]:
                    exclude += dp[i][j][w]
                
                dp[i][j][k] = (total_weight - exclude) % MOD
    
    print(dp[0][0][0])

max_weight_independent_set()