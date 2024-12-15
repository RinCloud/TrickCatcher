X = int(input())

# If X is 0, then the kangaroo is already at its destination
if X == 0:
    print(0)
    exit()

# Initialize a variable i to 1, representing the time
i = 1

# Keep track of the current coordinate of the kangaroo
current_coordinate = 0

# While the current coordinate is not equal to X
while current_coordinate != X:
    # Update the current coordinate based on the jump direction
    if current_coordinate < X:
        current_coordinate += i
    else:
        current_coordinate -= i
    
    # Increment the time
    i += 1

print(i-1)