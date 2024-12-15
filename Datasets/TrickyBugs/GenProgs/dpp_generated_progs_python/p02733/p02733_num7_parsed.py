# Read input values
H, W, K = map(int, input().split())

# Read the chocolate bar grid
chocolate_bar = [list(map(int, input())) for _ in range(H)]

# Initialize variables
cuts = 0
white_squares = 0

# Iterate over the chocolate bar
for i in range(H):
    for j in range(W):
        # Add the number of white squares in the current block
        white_squares += chocolate_bar[i][j]
        
        # Check if the number of white squares exceeds K
        if white_squares > K:
            # Increment the number of cuts and reset the counter
            cuts += 1
            white_squares = chocolate_bar[i][j]

# Print the number of cuts
print(cuts)
