# Program

def main():
    # Read the input
    H, W = map(int, input().split())
    grid = [list(input()) for _ in range(H)]

    # Initialize the count of operations needed
    count = 0

    # Check if (1, 1) and (H, W) are already white
    if grid[0][0] == '.' and grid[H-1][W-1] == '.':
        count += 0
    else:
        count += 1

    # Check if (1, 1) is already white
    if grid[0][0] == '#':
        # Invert all squares from (1, 1) to (H, W)
        for i in range(H):
            for j in range(W):
                if grid[i][j] == '#':
                    grid[i][j] = '.'
                else:
                    grid[i][j] = '#'
        count += 1

    # Check if (H, W) is already white
    if grid[H-1][W-1] == '#':
        # Invert all squares from (1, 1) to (H, W)
        for i in range(H):
            for j in range(W):
                if grid[i][j] == '#':
                    grid[i][j] = '.'
                else:
                    grid[i][j] = '#'
        count += 1

    # Print the count of operations needed
    print(count)

# Execute the main function
if __name__ == "__main__":
    main()