from collections import defaultdict

def solve(H, W, N, obstacles):
    # Create a set of obstacles
    obstacle_set = set(obstacles)
    # Create a dictionary to store the maximum actions
    max_actions = defaultdict(int)
    
    # Loop through each obstacle
    for obstacle in obstacles:
        x, y = obstacle
        # Check if the obstacle is not at the bottom right corner
        if x != H or y != W:
            # Calculate the number of actions for Takahashi
            actions = max_actions[(x+1, y)] + 1
            # Update the maximum actions for (x, y)
            max_actions[obstacle] = max(actions, max_actions[obstacle])
    
    return max_actions[(1, 1)]

# Read the input values
H, W, N = map(int, input().split())
obstacles = [tuple(map(int, input().split())) for _ in range(N)]

# Solve the problem and print the result
print(solve(H, W, N, obstacles))