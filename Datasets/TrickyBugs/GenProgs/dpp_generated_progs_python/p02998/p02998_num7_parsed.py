def max_operations(N, dots):
    # Create a dictionary to store the count of dots at each x-coordinate
    dot_count_x = {}
    # Create a dictionary to store the count of dots at each y-coordinate
    dot_count_y = {}
    
    # Iterate over all the dots to count the dots at each x-coordinate and y-coordinate
    for x, y in dots:
        if x in dot_count_x:
            dot_count_x[x] += 1
        else:
            dot_count_x[x] = 1
        if y in dot_count_y:
            dot_count_y[y] += 1
        else:
            dot_count_y[y] = 1
    
    # Initialize the maximum number of operations to 0
    max_operations = 0
    
    # Iterate over all the dots to check if four dots can be chosen for operation
    for x, y in dots:
        # Calculate the potential number of operations for the current dot
        potential_operations = dot_count_x[x] - 1 + dot_count_y[y] - 1
        # Update the maximum number of operations if the potential operations is greater
        if potential_operations > max_operations:
            max_operations = potential_operations
    
    return max_operations

# Read the input N
N = int(input())

# Read the coordinates of the dots
dots = []
for _ in range(N):
    x, y = map(int, input().split())
    dots.append((x, y))

# Call the max_operations function and print the result
print(max_operations(N, dots))