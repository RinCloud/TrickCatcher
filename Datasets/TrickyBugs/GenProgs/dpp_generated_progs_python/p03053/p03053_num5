def count_operations(H, W, grid):
    def is_valid(row, col):
        return 0 <= row < H and 0 <= col < W

    def is_white(row, col):
        return grid[row][col] == '.'

    def mark_as_black(row, col):
        grid[row][col] = '#'

    def BFS(row, col):
        queue = [(row, col)]
        while queue:
            curr_row, curr_col = queue.pop(0)
            neighbors = [(curr_row-1, curr_col), (curr_row+1, curr_col), (curr_row, curr_col-1), (curr_row, curr_col+1)]
            for neighbor in neighbors:
                neighbor_row, neighbor_col = neighbor
                if is_valid(neighbor_row, neighbor_col) and is_white(neighbor_row, neighbor_col):
                    mark_as_black(neighbor_row, neighbor_col)
                    queue.append((neighbor_row, neighbor_col))
    
    operations = 0
    
    for row in range(H):
        for col in range(W):
            if is_white(row, col):
                mark_as_black(row, col)
                BFS(row, col)
                operations += 1
    
    return operations

# Read input from standard input
H, W = map(int, input().split())
grid = [list(input()) for _ in range(H)]
    
# Call the function and print the result
result = count_operations(H, W, grid)
print(result)