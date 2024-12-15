'''
# Helper function to find the minimum number of watering operations
def minimum_watering_operations(N, heights):
    operations = 0
    
    # Iterate through each flower
    for i in range(N):
        if i == 0:
            operations += heights[i]
        else:
            if heights[i] > heights[i-1]:
                operations += heights[i] - heights[i-1]
    
    return operations

# Read input from standard input
N = int(input())
heights = list(map(int, input().split()))

# Calculate the minimum number of watering operations
min_operations = minimum_watering_operations(N, heights)

# Print the result
print(min_operations)
'''