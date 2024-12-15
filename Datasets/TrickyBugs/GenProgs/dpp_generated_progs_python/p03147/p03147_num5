# PROGRAM

# Function to calculate minimum number of watering operations required
def calculate_watering_operations(n, heights):
    operations = 0
    for i in range(n-1):
        if heights[i] < heights[i+1]:
            operations += heights[i+1] - heights[i]
    return operations

# Take input from standard input
n = int(input())
heights = list(map(int, input().split()))

# Call the function to calculate and print the minimum number of watering operations required
print(calculate_watering_operations(n, heights))