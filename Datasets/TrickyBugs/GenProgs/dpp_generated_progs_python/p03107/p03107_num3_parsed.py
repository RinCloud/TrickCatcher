"""
# Function to calculate the maximum number of cubes that can be removed
def calculate_max_cubes_removed(S):
    max_cubes_removed = 0
    red_count = 0
    blue_count = 0
    
    # Count the number of red and blue cubes
    for char in S:
        if char == '0':
            red_count += 1
        elif char == '1':
            blue_count += 1
    
    # Take the minimum count of red and blue cubes as the maximum number of cubes that can be removed
    max_cubes_removed = min(red_count, blue_count) * 2
    
    return max_cubes_removed

# Take input from the user
S = input()

# Calculate the maximum number of cubes that can be removed
max_cubes_removed = calculate_max_cubes_removed(S)

# Print the maximum number of cubes that can be removed
print(max_cubes_removed)
"""