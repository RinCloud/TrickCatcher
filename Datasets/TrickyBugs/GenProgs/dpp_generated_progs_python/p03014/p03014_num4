"""
# Read input
H, W = map(int, input().split())
S = [input() for _ in range(H)]

# Function to check if a square is valid and can be lighted
def is_valid(x, y):
    if x < 0 or x >= H or y < 0 or y >= W:
        return False
    if S[x][y] == '#':
        return False
    return True

# Initialize the maximum number of squares
max_squares = 0

# Loop through each square and check for maximum number of squares that can be lighted
for i in range(H):
    for j in range(W):
        # Check if current square can be lighted
        if S[i][j] == '.':
            # Initialize the number of squares lighted by current square
            squares = 1
            
            # Light squares in all four cardinal directions
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                x = i + dx
                y = j + dy
                
                while is_valid(x, y):
                    squares += 1
                    x += dx
                    y += dy
            
            # Update the maximum number of squares
            max_squares = max(max_squares, squares)

# Print the maximum number of squares that can be lighted
print(max_squares)
"""