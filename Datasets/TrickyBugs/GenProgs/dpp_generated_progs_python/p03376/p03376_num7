N, X, D = map(int, input().split())

m = []
p = []
for _ in range(N):
    m_i, p_i = map(int, input().split())
    m.append(m_i)
    p.append(p_i)

dp = [[-1] * (X + 1) for _ in range(N + 1)]
dp[0][0] = 0

for i in range(N):
    for j in range(X + 1):
        if dp[i][j] != -1:
            for k in range(j, min(X + 1, j + D + 1)):
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + (k - j) // m[i])

max_doughnuts = 0
for i in range(1, N + 1):
    max_doughnuts = max(max_doughnuts, dp[i][X])

print(max_doughnuts)