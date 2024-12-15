# Reading input from Standard Input
N = int(input())
A = list(map(int, input().split()))

# Initializing variables
dp = [0]*(N+1)

# Dynamic Programming approach
# dp[i] stores the maximum sum of chosen elements if we choose exactly i elements
# dp[i] = max(dp[i-2]+A[i-1], dp[i-1]) for i in range(2,N+1)
for i in range(2, N+1):
    dp[i] = max(dp[i-2]+A[i-1], dp[i-1])

# Printing the result
print(dp[N])