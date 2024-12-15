# Program:

N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

MOD = 10**9 + 7

dp = [[0] * (M + 1) for _ in range(N + 1)]
sum_ = [[0] * (M + 1) for _ in range(N + 1)]

for i in range(N + 1):
    dp[i][0] = 1
    sum_[i][0] = dp[i][0]

for j in range(M + 1):
    dp[0][j] = 1
    sum_[0][j] = dp[0][j]

for i in range(1, N + 1):
    for j in range(1, M + 1):
        dp[i][j] = sum_[i - 1][j - 1] if S[i - 1] == T[j - 1] else 0
        sum_[i][j] = (sum_[i][j - 1] + sum_[i - 1][j] - sum_[i - 1][j - 1] + dp[i][j]) % MOD

print(sum_[N][M])