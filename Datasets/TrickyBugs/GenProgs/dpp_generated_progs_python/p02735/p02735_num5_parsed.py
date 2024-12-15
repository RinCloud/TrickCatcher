def main():
    # Read input
    H, W = map(int, input().split())
    grid = [list(input()) for _ in range(H)]

    # Initialize the count of operations needed
    count = 0

    # Iterate through each square in the grid
    for r in range(H):
        for c in range(W):
            # If the current square is black, continue to next square
            if grid[r][c] == '#':
                continue
            
            # If it's the bottom-right corner, check if it's black
            if r == H - 1 and c == W - 1:
                if grid[r][c] == '#':
                    count += 1
                break

            # If the next square to the right is black, invert the colors in the rectangle formed by the current and next squares
            if c + 1 < W and grid[r][c + 1] == '#':
                count += 1
                for i in range(r, H):
                    for j in range(c, W):
                        if grid[i][j] == '#':
                            grid[i][j] = '.'
                        else:
                            grid[i][j] = '#'

            # If the next square downwards is black, invert the colors in the rectangle formed by the current and next squares
            elif r + 1 < H and grid[r + 1][c] == '#':
                count += 1
                for i in range(r, H):
                    for j in range(c, W):
                        if grid[i][j] == '#':
                            grid[i][j] = '.'
                        else:
                            grid[i][j] = '#'

    # Print the count of operations needed
    print(count)


if __name__ == '__main__':
    main()