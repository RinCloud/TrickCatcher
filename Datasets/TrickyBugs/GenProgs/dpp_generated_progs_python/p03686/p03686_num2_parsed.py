# Program to find the minimum required number of additional chairs

# Function to find the minimum required number of additional chairs
def find_additional_chairs(N, M, ranges):
    # Sort the ranges based on the start position
    ranges.sort(key=lambda x: x[0])
    
    # Initialize the required additional chairs count
    required_chairs = 0
    
    # Initialize the maximum right position
    max_right = 0
    
    # Iterate through each range
    for range in ranges:
        # If the range is not overlapping with the current maximum right position
        if range[0] > max_right:
            required_chairs += (range[0] - max_right)
            max_right = range[0]
        
        # Update the maximum right position
        max_right = max(max_right, range[1])
    
    return required_chairs

# Read the input values
N, M = map(int, input().split())

# Read the ranges
ranges = []
for _ in range(N):
    L, R = map(int, input().split())
    ranges.append((L, R))

# Find the minimum required number of additional chairs
minimum_chairs = find_additional_chairs(N, M, ranges)

# Print the result
print(minimum_chairs)