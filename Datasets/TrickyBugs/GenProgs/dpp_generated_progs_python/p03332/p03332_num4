MOD = 998244353
N, A, B, K = map(int, input().split())

# initialize dp table
dp = [0] * (N+1)
dp[0] = 1

# calculate number of ways
for i in range(1, N+1):
    for j in range(i):
        # calculate score for each color
        score_red = A * (i - j)
        score_green = B * j
        score_blue = B * (i - j)
        
        # update dp table
        dp[i] = (dp[i] + dp[j]) % MOD
        
# print number of ways to paint the tower
print(dp[N])