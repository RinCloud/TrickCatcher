from itertools import product

def count_blocks_bar(H, W, K, bar):
    # Initialize a variable to keep track of the minimum number of cuts
    min_cuts = float('inf')

    # Generate all possible combinations of horizontal cuts
    for cuts in product(range(H + 1), repeat=H - 1):
        # Initialize a variable to keep track of the number of blocks
        num_blocks = 0

        # Initialize a variable to keep track of the number of white squares in the current block
        white_squares = 0

        # Iterate through each row of the bar
        for i in range(H):
            # Initialize a variable to keep track of the number of squares in the current block
            num_squares = 0

            # Iterate through each column of the bar
            for j in range(W):
                # Check if the square is white
                if bar[i][j] == '1':
                    # Increment the number of white squares in the current block
                    white_squares += 1

                # Increment the number of squares in the current block
                num_squares += 1

                # Check if the number of white squares in the current block exceeds K
                if white_squares > K:
                    # Increment the number of blocks
                    num_blocks += 1

                    # Reset the number of white squares in the current block
                    white_squares = 0

                # Check if the number of squares in the current block exceeds W
                if num_squares == W:
                    # Increment the number of blocks
                    num_blocks += 1

        # Check if the number of blocks is less than or equal to the minimum number of cuts
        if num_blocks <= min_cuts:
            # Update the minimum number of cuts
            min_cuts = num_blocks

    # Return the minimum number of cuts
    return min_cuts

# Read the input values
H, W, K = map(int, input().split())
bar = [input() for _ in range(H)]

# Count the minimum number of cuts
result = count_blocks_bar(H, W, K, bar)

# Print the result
print(result)