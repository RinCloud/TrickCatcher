# Function to calculate the number of valid amidakuji
def calculate_amidakuji(H, W, K):
    # Define the modulo value
    MOD = 1000000007
    
    # Initialize a 2D array to store the number of valid amidakuji
    dp = [[0] * (W+1) for _ in range(H+1)]
    
    # Initialize the values
    dp[0][1] = 1
    
    # Iterate through each vertical line
    for i in range(1, H+1):
        for j in range(1, W+1):
            # Calculate the number of valid amidakuji by considering the previous vertical line
            dp[i][j] = (dp[i-1][j-1] * dp[i][j-1] % MOD + dp[i-1][j+1] * dp[i][j+1] % MOD) % MOD
    
    # Return the number of valid amidakuji for the K-th vertical line
    return dp[H][K]

# Read the input values
H, W, K = map(int, input().split())

# Calculate the number of valid amidakuji
num_valid_amidakuji = calculate_amidakuji(H, W, K)

# Print the result
print(num_valid_amidakuji)