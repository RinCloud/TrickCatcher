import itertools

def count_amidakuji(H, W, K):
    mod = 10**9 + 7
    dp = [[0] * (W+1) for _ in range(H+1)]
    dp[0][1] = 1
    
    for i in range(1, H+1):
        for j in range(1, W+1):
            dp[i][j] = (dp[i-1][j-1] * dp[i][j-1] + dp[i-1][j] * dp[i][j-1]) % mod
    
    return dp[H][K]

# Read input values
H, W, K = map(int, input().split())

# Call the function and print the result
print(count_amidakuji(H, W, K))