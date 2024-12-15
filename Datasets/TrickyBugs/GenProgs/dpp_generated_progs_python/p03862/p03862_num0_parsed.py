import sys

# Read the input from stdin
n, x = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

# Initialize the counter for number of operations required
operations = 0

# Iterate through the boxes
for i in range(1, n):
    # Find the excess candies in the neighboring boxes
    excess = max(0, a[i-1] + a[i] - x)
    
    # Update the number of operations required
    operations += excess
    
    # Eat the excess candies from the neighboring boxes
    a[i] = max(0, a[i] - excess)

# Print the minimum number of operations required
print(operations)