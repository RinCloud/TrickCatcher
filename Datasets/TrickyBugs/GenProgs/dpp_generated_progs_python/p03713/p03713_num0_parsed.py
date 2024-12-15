# Given the height and width of the chocolate bar, we need to divide it into three pieces such that the difference between the maximum and minimum size of the pieces is minimized. 

# To minimize the difference, we need to find the most balanced split of the chocolate bar. 

# If the chocolate bar is divided into three vertical pieces, then the difference between the maximum and minimum size would be equal to the width (W) of the bar, because one piece will have a width of W and the other two will have a width of 0.

# Similarly, if the chocolate bar is divided into three horizontal pieces, then the difference between the maximum and minimum size would be equal to the height (H) of the bar.

# However, the minimum difference can be achieved by dividing the chocolate bar into three vertical or horizontal pieces such that each piece has approximately equal height or width.

# To do this, we will check which split (vertical or horizontal) gives the minimum difference and print that difference as the output.

# Get the height and width of the chocolate bar from user input
H, W = map(int, input().split())

# Initialize the minimum difference variable to a large value
min_difference = float("inf")

# Check if splitting the bar vertically gives a smaller difference
for i in range(1, H):
    S1 = i * W  # area of the first piece
    S2 = (H - i) * (W // 2)  # area of the second piece
    S3 = (H - i) * (W - W // 2)  # area of the third piece
    max_size = max(S1, S2, S3)
    min_size = min(S1, S2, S3)
    difference = max_size - min_size
    min_difference = min(min_difference, difference)

# Check if splitting the bar horizontally gives a smaller difference
for i in range(1, W):
    S1 = i * H  # area of the first piece
    S2 = (W - i) * (H // 2)  # area of the second piece
    S3 = (W - i) * (H - H // 2)  # area of the third piece
    max_size = max(S1, S2, S3)
    min_size = min(S1, S2, S3)
    difference = max_size - min_size
    min_difference = min(min_difference, difference)

# Print the minimum possible difference between the maximum and minimum size of the pieces
print(min_difference)