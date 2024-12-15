import sys

# Read the input
N = int(input())
red_points = [list(map(int, input().split())) for _ in range(N)]
blue_points = [list(map(int, input().split())) for _ in range(N)]

# Sort the points in increasing order of their x-coordinate
red_points.sort(key=lambda x: x[0])
blue_points.sort(key=lambda x: x[0])

# Initialize a counter for the number of friendly pairs
pairs = 0

# Loop through each red point
for red_point in red_points:
    # Check if there exists a blue point that forms a friendly pair with the current red point
    for blue_point in blue_points:
        if blue_point[0] > red_point[0] and blue_point[1] > red_point[1]:
            pairs += 1
            # Remove the blue point from the list to ensure a point cannot belong to multiple pairs
            blue_points.remove(blue_point)
            break

# Print the maximum number of friendly pairs
print(pairs)