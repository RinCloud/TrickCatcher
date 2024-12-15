# Here's one approach to solve the problem:

# Read the values of H and W
H, W = map(int, input().split())

# Read the grid
grid = []
for _ in range(H):
    grid.append(input())

# Initialize the variables to store the maximum number of squares lighted by the lamp
max_squares_lighted = 0

# Iterate over each cell in the grid
for i in range(H):
    for j in range(W):
        # Check if the current cell is not occupied by an obstacle
        if grid[i][j] == '.':
            # Count the number of squares lighted in each direction
            up_count = 0
            down_count = 0
            left_count = 0
            right_count = 0

            # Count squares lighted in the up direction
            for k in range(i, -1, -1):
                if grid[k][j] == '#':
                    break
                up_count += 1

            # Count squares lighted in the down direction
            for k in range(i, H):
                if grid[k][j] == '#':
                    break
                down_count += 1

            # Count squares lighted in the left direction
            for k in range(j, -1, -1):
                if grid[i][k] == '#':
                    break
                left_count += 1

            # Count squares lighted in the right direction
            for k in range(j, W):
                if grid[i][k] == '#':
                    break
                right_count += 1

            # Calculate the total number of squares lighted for the current cell
            total_squares_lighted = up_count + down_count + left_count + right_count - 3

            # Update the maximum number of squares lighted if necessary
            max_squares_lighted = max(max_squares_lighted, total_squares_lighted)

# Print the maximum number of squares lighted by the lamp
print(max_squares_lighted)