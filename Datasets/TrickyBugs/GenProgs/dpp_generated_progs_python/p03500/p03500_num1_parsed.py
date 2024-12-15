import sys

N, K = map(int, sys.stdin.readline().split())
A = list(map(int, sys.stdin.readline().split()))

MOD = 10**9+7

# Initialize dp array
dp = [[0] * (K+1) for _ in range(N+1)]
dp[0][0] = 1

# Iterate over each number from 1 to N
for i in range(1, N+1):
    # Iterate over each possible remainder after division by 2
    for j in range(K+1):
        # Calculate the number of possible combinations after ith operation
        dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD
        
        # Check if A[i-1] is divisible by 2
        if A[i-1] % 2 == 0:
            # Calculate the number of possible combinations after ith operation
            dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD
        
        # Divide A[i-1] by 2 until it becomes 0 or odd
        while A[i-1] % 2 == 0 and j > 0:
            A[i-1] //= 2
            j -= 1

# Print the number of different possible combinations
print(dp[N][K])