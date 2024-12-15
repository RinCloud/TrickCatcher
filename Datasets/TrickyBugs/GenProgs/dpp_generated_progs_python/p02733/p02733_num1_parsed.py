def count_minimum_cuts(H, W, K, S):
    # Initialize the number of cuts
    num_cuts = 0
    
    # Initialize the current row and column
    current_row = 1
    current_col = 1
    
    # Loop through the rows of the chocolate bar
    while current_row <= H:
        # Initialize the number of white squares in the current block
        num_white_squares = 0
        
        # Loop through the columns of the current row
        while current_col <= W:
            # If the current square is white, increment the number of white squares
            if S[current_row-1][current_col-1] == '1':
                num_white_squares += 1
            
            # If the number of white squares exceeds K, increment the number of cuts and reset the number of white squares
            if num_white_squares > K:
                num_cuts += 1
                num_white_squares = 0
            
            # Move to the next column
            current_col += 1
        
        # If the number of white squares exceeds K in the last block of the row, increment the number of cuts
        if num_white_squares > K:
            num_cuts += 1
        
        # Move to the next row and reset the current column
        current_row += 1
        current_col = 1
    
    # Print the number of minimum cuts
    print(num_cuts)


# Read the input values
H, W, K = map(int, input().split())
S = []
for _ in range(H):
    S.append(input())

# Count the minimum cuts
count_minimum_cuts(H, W, K, S)