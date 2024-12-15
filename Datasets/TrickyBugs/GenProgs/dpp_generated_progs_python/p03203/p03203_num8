"""
def find_actions(H, W, N, obstacles):
    # Create a grid with all cells set to 0
    grid = [[0] * W for _ in range(H)]
    takahashi_actions = 0

    # Mark obstacle cells as 1
    for obstacle in obstacles:
        x, y = obstacle
        grid[x-1][y-1] = 1

    # Check if the destination cell is valid
    def valid_cell(x, y):
        if 0 <= x < H and 0 <= y < W and grid[x][y] == 0:
            return True
        return False

    # Move the piece to an adjacent cell and count the actions
    def move_piece(x, y):
        actions = 0
        if valid_cell(x+1, y):
            actions += 1
        if valid_cell(x, y+1):
            actions += 1
        return actions

    # Start from (1, 1)
    x, y = 0, 0
    while True:
        actions = move_piece(x, y)
        if actions == 0:
            break
        takahashi_actions += actions
        if valid_cell(x+1, y):
            x += 1
        else:
            y += 1

    return takahashi_actions

# Read input values
H, W, N = map(int, input().split())
obstacles = [list(map(int, input().split())) for _ in range(N)]

# Call the function and print the result
print(find_actions(H, W, N, obstacles))
"""