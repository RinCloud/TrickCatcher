def count_operations(H, W, grid):
    # Initialize the count of operations to 0
    count = 0

    # Create a boolean grid to keep track of squares that need to be visited
    visited = [[False for _ in range(W)] for _ in range(H)]

    # Use a queue to perform Breadth First Search on the grid
    queue = []

    # Find the first black square and add it to the queue
    for i in range(H):
        for j in range(W):
            if grid[i][j] == '#':
                queue.append((i, j))
                visited[i][j] = True

    # Iterate until the queue is empty
    while queue:
        # Increment the count of operations
        count += 1

        # Size of the current level (all squares requiring updating at the current count)
        level_size = len(queue)

        # Process all squares at the current level
        for _ in range(level_size):
            # Pop the front square from the queue
            current_square = queue.pop(0)
            row, col = current_square

            # Check all adjacent squares
            # Up
            if row > 0 and grid[row - 1][col] == '.' and not visited[row - 1][col]:
                queue.append((row - 1, col))
                visited[row - 1][col] = True
            # Down
            if row < H - 1 and grid[row + 1][col] == '.' and not visited[row + 1][col]:
                queue.append((row + 1, col))
                visited[row + 1][col] = True
            # Left
            if col > 0 and grid[row][col - 1] == '.' and not visited[row][col - 1]:
                queue.append((row, col - 1))
                visited[row][col - 1] = True
            # Right
            if col < W - 1 and grid[row][col + 1] == '.' and not visited[row][col + 1]:
                queue.append((row, col + 1))
                visited[row][col + 1] = True

    # Subtract 1 from the count as we don't count the initial state
    count -= 1

    return count


# Read the input
H, W = map(int, input().split())

grid = []
for _ in range(H):
    row = list(input())
    grid.append(row)

# Calculate and print the number of operations
operations = count_operations(H, W, grid)
print(operations)