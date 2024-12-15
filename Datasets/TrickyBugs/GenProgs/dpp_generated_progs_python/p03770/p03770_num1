from collections import Counter

# Read the input
N, X, Y = map(int, input().split())
balls = []
for _ in range(N):
    c, w = map(int, input().split())
    balls.append((c, w))

# Create a count of colors
color_count = Counter([ball[0] for ball in balls])

# Create a list of unique colors
unique_colors = list(color_count.keys())

# Create a list of weights per color
color_weights = [0] * (N + 1)
for c, w in balls:
    color_weights[c] += w

# Initialize the dp table
dp = [0] * (N + 1)
dp[0] = 1

# Loop through each color
for color in unique_colors:
    # Calculate the number of balls of this color
    num_balls = color_count[color]
    
    # Calculate the total weight of all balls of this color
    total_weight = color_weights[color]
    
    # Loop through each possible weight
    for weight in range(total_weight, -1, -1):
        # Calculate the number of balls that can be swapped with another ball of the same color
        num_swaps_same_color = (weight + X - 1) // X
        num_swaps_same_color = min(num_swaps_same_color, num_balls)
        
        # Calculate the number of balls that can be swapped with a ball of a different color
        num_swaps_diff_color = (weight + Y - 1) // Y
        num_swaps_diff_color = min(num_swaps_diff_color, N - num_balls)
        
        # Update the dp table
        dp[weight] += dp[weight - X * num_swaps_same_color - Y * num_swaps_diff_color]
        dp[weight] %= 1000000007

# Output the answer
print(dp[total_weight])