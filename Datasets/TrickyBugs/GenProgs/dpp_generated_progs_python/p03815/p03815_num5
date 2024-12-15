x = int(input())

# Create a list to keep track of the points obtained for each side of the die
points = [0] * 6

# Initialize the minimum number of operations needed as infinity
min_operations = float('inf')

# Iterate over all possible initial sides of the die
for initial_side in range(1, 7):
    # Set the current side of the die as the initial side
    current_side = initial_side
    
    # Initialize the total points obtained
    total_points = 0
    
    # Initialize the number of operations needed
    operations = 0
    
    # Rotate the die until the total points obtained are greater than or equal to x
    while total_points < x:
        # Get the points for the current side
        points[current_side - 1] += 1
        total_points += current_side
        
        # Check if all sides of the die have been used
        if all(point > 0 for point in points):
            # Update the minimum number of operations needed
            min_operations = min(min_operations, operations + 1)
            break
        
        # Rotate the die
        if current_side == 1:
            current_side = 6
        elif current_side == 6:
            current_side = 1
        elif current_side == 2:
            current_side = 5
        elif current_side == 5:
            current_side = 2
        elif current_side == 3:
            current_side = 4
        else:
            current_side = 3
            
        # Increment the number of operations
        operations += 1
        
# Print the minimum number of operations needed
print(min_operations)