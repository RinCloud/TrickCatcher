from math import ceil

# Read input values
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Initialize the total number of operations
operations = 0

# Iterate over the boxes and perform operations
for i in range(1, N):
    # Calculate the excess candies in the neighboring boxes
    excess = a[i] + a[i-1] - x
    
    # If there is excess candies, we need to eat some
    if excess > 0:
        # Find the minimum number of candies to eat
        eat = min(excess, a[i])
        
        # Update the number of candies in the current and neighboring boxes
        a[i] -= eat
        a[i-1] -= max(0, excess - eat)
        
        # Increment the total number of operations
        operations += eat

# Print the minimum number of operations required
print(operations)