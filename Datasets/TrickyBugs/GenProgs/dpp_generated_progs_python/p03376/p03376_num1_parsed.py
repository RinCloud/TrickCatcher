# Getting input values
N, X, D = map(int, input().split())

# Creating a list to store Moto value for each doughnut
m = [0] * (N+1)
p = [0] * (N+1)

# Getting Moto values for each doughnut and its corresponding modification
for i in range(1, N+1):
    m[i], p[i] = map(int, input().split())

# Initializing variables
c = [0] * (N+1) # Number of doughnuts made
dp = [[0] * (X+1) for _ in range(N+1)] # DP table

# Updating DP table
for i in range(1, N+1):
    for j in range(X+1):
        # If weight of Moto required to make doughnut i is greater than available Moto (j), then
        # directly propagate the previous result
        if m[i] > j:
            dp[i][j] = dp[i-1][j]
        else:
            # Determine the maximum number of doughnuts that can be made with the given Moto
            # considering the constraint c[p[i]] ≤ c[i] ≤ c[p[i]] + D
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-m[i]] + 1)
            # Apply the constraint
            dp[i][j] = min(dp[i][j], dp[i][j-1])
            # If the constraint is not violated, update the number of doughnuts made
            if c[p[i]] <= c[i] <= c[p[i]] + D:
                c[i] = dp[i][j]

# Printing the maximum number of doughnuts that can be made
print(dp[N][X])