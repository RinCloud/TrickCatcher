MOD = 10**9 + 7

# Read input
N, M = map(int, input().split())
S = input()
operations = [tuple(map(int, input().split())) for _ in range(M)]

# Initialize a 2D list to keep track of the number of possibilities for each position
dp = [[0] * N for _ in range(N)]

# Initialize the base case where the substring consists of only one character
for i in range(N):
    dp[i][i] = 1

# Perform the operations in reverse order
for l, r in reversed(operations):
    # Initialize a 2D list to keep track of the number of possibilities for each position in the current substring
    next_dp = [[0] * N for _ in range(N)]
    
    # Iterate over all possible lengths of the current substring
    for length in range(r - l + 1):
        # Iterate over all possible starting positions of the current substring
        for start in range(N - length):
            end = start + length
            for k in range(start, end + 1):
                # Update the number of possibilities based on the current operation
                next_dp[start][end] += dp[start][k] * dp[k][end]
                next_dp[start][end] %= MOD
    
    # Update the dp array with the next_dp array
    dp = next_dp

# Calculate the total number of possibilities for the entire string
total_possibilities = sum(sum(row) for row in dp) % MOD

# Print the result
print(total_possibilities)