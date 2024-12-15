def solve(H, W, K):
    # Create a 2D grid to represent the amidakuji
    grid = [[0] * (H + 1) for _ in range(W + 1)]

    # Initialize the first column of the grid
    grid[0][0] = 1

    # Iterate through each column
    for col in range(1, W + 1):
        # Iterate through each row
        for row in range(H + 1):
            # The current cell can be reached from the cells above and to the left of it
            grid[col][row] = (grid[col - 1][row] + grid[col][row - 1]) % 1000000007

    # The answer is the value at the Kth vertical line from the left
    return grid[W][K - 1]


# Read input values
H, W, K = map(int, input().split())

# Solve the problem and print the result
print(solve(H, W, K))