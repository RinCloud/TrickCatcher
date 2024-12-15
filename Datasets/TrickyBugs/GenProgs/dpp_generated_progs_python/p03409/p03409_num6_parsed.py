import sys

def count_friendly_pairs(N, red_points, blue_points):
    max_pairs = 0
    
    # Sort the red points and blue points in increasing order of their x-coordinate
    red_points.sort(key=lambda point: point[0])
    blue_points.sort(key=lambda point: point[0])
    
    # For each blue point, find the maximum number of friendly pairs it can form
    for blue_point in blue_points:
        count = 0
        
        # Find the number of red points that satisfy the condition for friendly pair
        for red_point in red_points:
            if red_point[0] < blue_point[0] and red_point[1] < blue_point[1]:
                count += 1
        
        # Update the maximum number of pairs
        max_pairs = max(max_pairs, count)
    
    return max_pairs

# Read input values
N = int(input())
red_points = [list(map(int, input().split())) for _ in range(N)]
blue_points = [list(map(int, input().split())) for _ in range(N)]

# Calculate the maximum number of friendly pairs
max_pairs = count_friendly_pairs(N, red_points, blue_points)

# Print the result
print(max_pairs)