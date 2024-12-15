# Read the input values
h, w = map(int, input().split())

# Initialize the minimum difference variable
min_diff = float('inf')

# Iterate through all the possible ways of cutting the chocolate bar
# and calculate the area of the largest and smallest pieces
for i in range(1, h):
    # Calculate the area of the first piece
    piece1 = i * w
    
    # Calculate the height of the second piece
    h2 = h - i
    
    # Calculate all possible ways of dividing the width of the second piece
    for j in range(1, w):
        # Calculate the area of the second piece
        piece2 = h2 * j
        
        # Calculate the area of the third piece
        piece3 = h2 * (w - j)
        
        # Calculate the maximum and minimum areas
        max_area = max(piece1, piece2, piece3)
        min_area = min(piece1, piece2, piece3)
        
        # Update the minimum difference if necessary
        min_diff = min(min_diff, max_area - min_area)

# Print the minimum possible value of the difference between the largest and smallest pieces
print(min_diff)