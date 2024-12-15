import sys

def main():
    # Read input
    h, w = map(int, input().split())
    grid = [list(input().strip()) for _ in range(h)]

    # Initialize max_lighted_squares to 0
    max_lighted_squares = 0

    # Iterate over each square in the grid
    for i in range(h):
        for j in range(w):
            # Check if the square is empty
            if grid[i][j] == '.':
                # Initialize lighted_squares to 1
                lighted_squares = 1

                # Check for obstacles in the upward direction
                k = i - 1
                while k >= 0 and grid[k][j] != '#':
                    lighted_squares += 1
                    k -= 1

                # Check for obstacles in the downward direction
                k = i + 1
                while k < h and grid[k][j] != '#':
                    lighted_squares += 1
                    k += 1

                # Check for obstacles in the left direction
                k = j - 1
                while k >= 0 and grid[i][k] != '#':
                    lighted_squares += 1
                    k -= 1

                # Check for obstacles in the right direction
                k = j + 1
                while k < w and grid[i][k] != '#':
                    lighted_squares += 1
                    k += 1

                # Update max_lighted_squares if necessary
                max_lighted_squares = max(max_lighted_squares, lighted_squares)

    # Print the result
    print(max_lighted_squares)

if __name__ == '__main__':
    main()