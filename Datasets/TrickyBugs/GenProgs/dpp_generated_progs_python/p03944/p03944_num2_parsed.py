W, H, N = map(int, input().split())

# Initialize the white region area
area = W * H

# Iterate through each point
for _ in range(N):
    x, y, a = map(int, input().split())
    
    # If a_i = 1, reduce the white region area in the left of x
    if a == 1:
        area -= x * H
    
    # If a_i = 2, reduce the white region area in the right of x
    elif a == 2:
        area -= (W - x) * H
    
    # If a_i = 3, reduce the white region area below y
    elif a == 3:
        area -= y * W
    
    # If a_i = 4, reduce the white region area above y
    elif a == 4:
        area -= (H - y) * W

# Print the remaining white region area
print(area)