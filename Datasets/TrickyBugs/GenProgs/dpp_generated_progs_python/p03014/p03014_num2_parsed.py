H, W = map(int, input().split())
S = [input() for _ in range(H)]

max_lighted_squares = 0

# For each cell in the grid, find the maximum number of lighted squares
for i in range(H):
    for j in range(W):
        if S[i][j] == '.':
            # Initialize counts for each direction
            count_up = 1
            count_down = 1
            count_left = 1
            count_right = 1
            
            # Check the up direction
            r = i - 1
            while r >= 0 and S[r][j] != '#':
                count_up += 1
                r -= 1

            # Check the down direction
            r = i + 1
            while r < H and S[r][j] != '#':
                count_down += 1
                r += 1

            # Check the left direction
            c = j - 1
            while c >= 0 and S[i][c] != '#':
                count_left += 1
                c -= 1

            # Check the right direction
            c = j + 1
            while c < W and S[i][c] != '#':
                count_right += 1
                c += 1

            # Calculate the total number of lighted squares for this cell
            total = count_up + count_down + count_left + count_right - 3

            # Update the maximum number of lighted squares
            max_lighted_squares = max(max_lighted_squares, total)

# Print the maximum possible number of squares lighted by the lamp
print(max_lighted_squares)
