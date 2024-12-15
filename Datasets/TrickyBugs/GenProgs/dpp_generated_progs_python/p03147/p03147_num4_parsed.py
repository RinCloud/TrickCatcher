# Function to calculate minimum number of watering operations required

def calculate_min_watering_operations(N, heights):
    operations = 0
    
    # Iterate over each flower
    for k in range(N):
        # Increase the height of the flower
        operations += heights[k]
        
        # If the height of the next flower is greater than the current flower
        if k < N-1 and heights[k+1] > heights[k]:
            # Increase the height of the current flower by the difference
            operations += heights[k+1] - heights[k]
    
    return operations

# Read input from standard input
N = int(input())
heights = list(map(int, input().split()))

# Calculate minimum number of watering operations
min_operations = calculate_min_watering_operations(N, heights)

# Print the result
print(min_operations)