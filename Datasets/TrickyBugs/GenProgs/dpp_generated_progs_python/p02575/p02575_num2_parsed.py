# PROGRAM:

# Read the input values
H, W = map(int, input().split())

# Create a list to store the grid
grid = []

# Read the grid values
for i in range(H):
    A, B = map(int, input().split())
    grid.append((A, B))

# Create a list to store the minimum number of moves
min_moves = []

# Calculate the minimum number of moves for each case
for k in range(H):

    # Initialize the minimum number of moves as infinity
    moves = float('inf')

    # Check all possible starting squares in the top row
    for i in range(grid[k][0], grid[k][1]+1):

        # Calculate the number of moves required to reach the next row
        curr_moves = i - 1

        # If the current number of moves is less than the minimum, update the minimum
        if curr_moves < moves:
            moves = curr_moves

    # If no reachable square in the next row, set moves as -1
    if moves == float('inf'):
        moves = -1

    # Append the minimum number of moves to the list
    min_moves.append(moves)

# Print the minimum number of moves for each case
for moves in min_moves:
    print(moves)