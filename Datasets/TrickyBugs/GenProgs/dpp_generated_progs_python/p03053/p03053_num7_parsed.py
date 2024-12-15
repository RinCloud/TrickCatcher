import queue

# Function to check if the given cell (i, j) is a valid cell or not
def isValid(i, j, H, W):
    return i >= 0 and i < H and j >= 0 and j < W

# Function to perform the operation and count the number of operations
def countOperations(grid, H, W):
    # Initialize a visited array to keep track of visited cells
    visited = [[False for _ in range(W)] for _ in range(H)]
    
    # Initialize a queue for BFS traversal
    q = queue.Queue()
    
    # Initialize count to keep track of number of operations
    count = 0
    
    # Traverse the grid and find the black square(s) to start the operation
    for i in range(H):
        for j in range(W):
            if grid[i][j] == '#':
                q.put((i, j))
                visited[i][j] = True
    
    # BFS traversal to perform the operation and count the number of operations
    while not q.empty():
        size = q.qsize()
        
        while size > 0:
            size -= 1
            curr = q.get()
            row, col = curr[0], curr[1]
            
            # Check all four adjacent cells
            for k in range(4):
                x = row + dx[k]
                y = col + dy[k]
                
                if isValid(x, y, H, W) and not visited[x][y] and grid[x][y] == '.':
                    q.put((x, y))
                    visited[x][y] = True
        
        # Increment the count after each BFS traversal
        count += 1
    
    # Decrease the count by 1, as the last BFS traversal does not change anything
    count -= 1
    
    return count

# Read the input
H, W = map(int, input().split())

# Initialize the grid
grid = []
for _ in range(H):
    grid.append(list(input()))

# Define the four directions
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

# Call the function to count the number of operations
num_operations = countOperations(grid, H, W)

# Print the result
print(num_operations)