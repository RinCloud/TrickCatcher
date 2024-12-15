MOD = 10**9 + 7

def count_sequences(N, A):
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(2, N*2+1):
        x = []
        for j in range(1, N+1):
            if A[i-1] != -1 and A[i-1] != j:
                continue
            for k in range(j):
                x.append(dp[j-k-1][i-j-1])
        for j in range(N):
            dp[j+1][i-j] = sum(x) % MOD
    
    return dp[N][N]

N = int(input())
A = list(map(int, input().split()))
print(count_sequences(N, A))