# program to find the count of different possible sequences of colors of 2*M bricks
# Joisino will build a tower by stacking the bricks in a specific manner

def count_sequences(N, M):
    # store the count of sequences for each position
    dp = [[0] * (2 * M + 1) for _ in range(N + 1)]
    
    # initialize the base case - when there are no bricks
    for i in range(2 * M + 1):
        dp[0][i] = 1
    
    # iterate for each number of bricks
    for i in range(1, N + 1):
        # iterate for each position
        for j in range(2 * M + 1):
            # when the position is at the beginning or end
            if j == 0 or j == 2 * M:
                # add one blue and one red brick
                dp[i][j] = dp[i - 1][j + 1]
            # when the position is in the middle
            else:
                # add one blue and one red brick and remove one brick from both sides
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1]
                
    # calculate the total count of sequences
    total_count = 0
    for i in range(2 * M + 1):
        total_count += dp[N][i]
    
    # return the count modulo 10^9+7
    return total_count % (10**9 + 7)

# get the input values
N, M = map(int, input().split())

# find and print the count of different possible sequences of colors of 2*M bricks
print(count_sequences(N, M))