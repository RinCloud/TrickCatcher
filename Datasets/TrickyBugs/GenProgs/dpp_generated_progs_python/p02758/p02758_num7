from typing import List

def count_possible_sets(N: int, robots: List[List[int]]) -> int:
    MOD = 998244353
    
    # Sort the robots by their starting position
    robots.sort(key=lambda x: x[0])
    
    # Initialize a DP array to store the number of possible sets of robots
    dp = [0] * (N + 1)
    dp[0] = 1
    
    # Iterate through each robot
    for i in range(N):
        # Initialize a temporary DP array for the current robot
        temp_dp = dp[:]
        
        # Find the maximum index of the robot that can be activated by the current robot
        max_index = i
        
        j = i - 1
        while j >= 0 and robots[j][0] + robots[j][1] > robots[i][0]:
            max_index = max(max_index, temp_dp[j])
            j -= 1
        
        # Update the temporary DP array based on the maximum index
        temp_dp[i + 1] = (temp_dp[i + 1] + temp_dp[i]) % MOD
        temp_dp[max_index + 1] = (temp_dp[max_index + 1] - temp_dp[i]) % MOD
        
        # Update the DP array
        for j in range(i + 1):
            temp_dp[j] = (temp_dp[j] + temp_dp[j - 1]) % MOD
            dp[j] = (dp[j] + temp_dp[j]) % MOD
    
    # Return the number of possible sets of robots remaining on the number line
    return dp[N]

# Read the input
N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append([X, D])

# Count the possible sets of robots remaining on the number line
result = count_possible_sets(N, robots)

# Print the result
print(result)