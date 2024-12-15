# Program

H, W = map(int, input().split())

# Calculate the possible minimum values of S_max and S_min based on height and width

# If height is odd, it is not possible to divide the chocolate evenly
if H % 2 == 1:
    min_diff = W
    
# If width is odd, it is not possible to divide the chocolate evenly
elif W % 2 == 1:
    min_diff = H
    
# If both height and width are even, calculate the difference between the largest and smallest piece.
else:
    # Divide the height and width by 2
    h = H // 2
    w = W // 2
    
    # Calculate the possible differences for the three cases: vertical cut, horizontal cut, and combination cut
    min_diff = min(w, W - w, h, H - h)
    
print(min_diff)