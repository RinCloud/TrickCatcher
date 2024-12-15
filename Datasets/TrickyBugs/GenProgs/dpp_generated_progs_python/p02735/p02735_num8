def main():
    # Read input grid size
    H, W = map(int, input().split())

    # Read input grid
    grid = []
    for _ in range(H):
        row = input().strip()
        grid.append(row)

    # Initialize operations count
    operations = 0

    # Check if (1, 1) and (H, W) are already white
    if grid[0][0] == '.' and grid[H-1][W-1] == '.':
        operations -= 1

    # Check if (1, 1) is black and (H, W) is white
    if grid[0][0] == '#' and grid[H-1][W-1] == '.':
        # Invert color of (1, 1) to make it white
        grid[0] = grid[0].replace('#', '.')

        # Increment operations count
        operations += 1

    # Check if (1, 1) is white and (H, W) is black
    if grid[0][0] == '.' and grid[H-1][W-1] == '#':
        # Invert color of (H, W) to make it white
        grid[H-1] = grid[H-1].replace('#', '.')

        # Increment operations count
        operations += 1

    # Check if (1, 1) and (H, W) are black
    if grid[0][0] == '#' and grid[H-1][W-1] == '#':
        # Invert color of (1, 1) to make it white
        grid[0] = grid[0].replace('#', '.')

        # Invert color of (H, W) to make it white
        grid[H-1] = grid[H-1].replace('#', '.')

        # Increment operations count
        operations += 2

    # Print the minimum number of operations needed
    print(operations)


if __name__ == '__main__':
    main()