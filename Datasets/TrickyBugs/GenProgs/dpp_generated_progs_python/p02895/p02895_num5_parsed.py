N = int(input())
A = [list(map(int, input())) for _ in range(2*N)]

dp = [[0] * (1<<N) for _ in range(2*N+1)]
dp[0][0] = 1

for i in range(2*N):
    for j in range(1<<N):
        if dp[i][j] == 0:
            continue
        cnt = bin(j).count('1')
        for k in range(N):
            if A[i][k] and not (j >> k) & 1:
                dp[i+1][j|1<<k] += dp[i][j]

print(dp[2*N][(1<<N)-1])