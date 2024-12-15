def count_min_cuts(H, W, K, S):
    # Create a variable to keep track of the number of cuts
    cuts = 0

    # Iterate over each row of the chocolate bar
    for i in range(H):
        # Initialize a variable to keep track of the number of white squares in the current block
        white_squares = 0

        # Iterate over each square in the current row
        for j in range(W):
            # If the square is white, increment the count
            if S[i][j] == "1":
                white_squares += 1
            
            # If the number of white squares exceeds K, we need to make a cut
            if white_squares > K:
                cuts += 1
                white_squares = 1  # Reset the count to 1 since we've made a cut
        
    # Return the number of cuts needed
    return cuts

# Read input from standard input
H, W, K = map(int, input().split())
S = [input() for _ in range(H)]

# Calculate the number of minimum cuts needed
min_cuts = count_min_cuts(H, W, K, S)

# Print the result
print(min_cuts)
