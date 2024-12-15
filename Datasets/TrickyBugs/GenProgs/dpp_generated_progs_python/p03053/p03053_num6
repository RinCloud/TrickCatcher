def count_operations(H, W, grid):
    # Initialize a count variable to keep track of the number of operations
    count = 0
    
    # Create a list to store the coordinates of the white squares
    white_squares = []
    
    # Iterate through each square in the grid and check if it is white
    for i in range(H):
        for j in range(W):
            if grid[i][j] == ".":
                white_squares.append((i, j))
    
    # Perform the operation until all squares are black
    while white_squares:
        # Create a list to store the coordinates of the squares to be turned black in this iteration
        new_black_squares = []
        
        # Iterate through each white square and check if it shares a side with a black square
        for x, y in white_squares:
            # Check if any adjacent square is black
            if (x-1 >= 0 and grid[x-1][y] == "#") or \
               (x+1 < H and grid[x+1][y] == "#") or \
               (y-1 >= 0 and grid[x][y-1] == "#") or \
               (y+1 < W and grid[x][y+1] == "#"):
                new_black_squares.append((x, y))
        
        # Update the grid by turning the white squares to black
        for x, y in new_black_squares:
            grid[x][y] = "#"
        
        # Increment the count of operations
        count += 1
        
        # Update the list of white squares
        white_squares = new_black_squares
    
    # Return the number of operations performed
    return count


# Read the input from standard input
H, W = map(int, input().split())
grid = [list(input()) for _ in range(H)]

# Call the function to count the number of operations
result = count_operations(H, W, grid)

# Print the result
print(result)