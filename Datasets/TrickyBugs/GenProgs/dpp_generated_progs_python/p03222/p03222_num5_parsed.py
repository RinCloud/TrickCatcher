# First, we need to read the input values H, W, and K
H, W, K = map(int, input().split())

# Create a list to store the number of valid amidakuji for each vertical line
dp = [[0] * (W+2) for _ in range(H+1)]

# Initialize the first vertical line with 1, as there is only one way to reach the bottom of the first line
dp[0][1] = 1

# Iterate through each vertical line
for i in range(H):
    # Iterate through each horizontal line
    for j in range(1, W+1):
        # Calculate the number of valid amidakuji by considering the connections at the current horizontal line
        dp[i+1][j] = (dp[i][j-1] * dp[i+1][j-1] * dp[i][j]) % 1000000007

# Print the number of valid amidakuji for the K-th vertical line
print(dp[H][K])