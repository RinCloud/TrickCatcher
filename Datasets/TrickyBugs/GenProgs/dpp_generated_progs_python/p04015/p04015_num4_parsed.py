# Reading the input
N, A = map(int, input().split())
x = list(map(int, input().split()))

# Dynamic programming array to store the number of ways for each sum and number of selected cards
dp = [[[0] * (N + 1) for _ in range((A+1) * N + 1)] for _ in range(N + 1)]

# Initializing the base case where there is 1 way to select 0 cards with sum 0
dp[0][0][0] = 1

# Looping through the cards
for i in range(N):
    for j in range(N, 0, -1):
        for k in range(1, (A+1) * N + 1):
            # If the current card is less than or equal to the current sum
            if x[i] <= k:
                # Adding the number of ways to select j-1 cards with a sum of k-x[i]
                dp[j][k][i+1] += dp[j-1][k-x[i]][i]
            # Adding the number of ways to select j cards with a sum of k
            dp[j][k][i+1] += dp[j][k][i]
            
# Counting the number of ways to select cards with an average of A
ways = 0
for j in range(1, N+1):
    ways += dp[j][j*A][N]

# Printing the result
print(ways)