from math import comb

H, W, K = map(int, input().split())

# Create a dp table to store the number of ways to reach each vertical line
dp = [[0] * (W+1) for _ in range(H+1)]
dp[0][1] = 1

# Iterate through each vertical line
for i in range(1, H+1):
    # Iterate through each horizontal line
    for j in range(1, W+1):
        # Calculate number of ways to reach current vertical line from its previous vertical line
        dp[i][j] = (dp[i-1][j-1] * comb(W-j+1, j-1) % 1000000007 + 
                    dp[i-1][j] * comb(W-j, j) % 1000000007 +
                    dp[i-1][j+1] * comb(W-j, j-1) % 1000000007) % 1000000007

# Print the number of ways to reach the K-th vertical line
print(dp[H][K])