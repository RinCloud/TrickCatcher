# Reading input
H, W, N = map(int, input().split())
obstacles = [tuple(map(int, input().split())) for _ in range(N)]

# Initializing variables
actions = 0
piece_row, piece_col = 1, 1

# Function to check if the cell is valid
def is_valid_cell(row, col):
    return 1 <= row <= H and 1 <= col <= W

# Checking each adjacent cell
for obstacle_row, obstacle_col in obstacles:
    
    # Horizontal movement from Takahashi's turn
    actions += max(obstacle_col - piece_col - 1, 0)
    piece_col = obstacle_col - 1
    
    # Vertical movement from Aoki's turn
    actions += max(obstacle_row - piece_row - 1, 0)
    piece_row = obstacle_row - 1

# Final movements to reach the bottom-right corner
actions += max(W - piece_col - 1, 0)
actions += max(H - piece_row - 1, 0)

# Output the result
print(actions)