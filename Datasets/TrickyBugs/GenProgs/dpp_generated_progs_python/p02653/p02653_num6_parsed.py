mod = 10**9 + 7

N, A, B = map(int, input().split())

memo = [[0] * (N + 1) for _ in range(N + 1)]
memo[0][0] = 1

for i in range(N + 1):
    for j in range(N + 1):
        if i >= A:
            memo[i][j] += memo[i - A][j]
        if j >= B:
            memo[i][j] += memo[i][j - B]
        memo[i][j] %= mod

print(memo[N][N])