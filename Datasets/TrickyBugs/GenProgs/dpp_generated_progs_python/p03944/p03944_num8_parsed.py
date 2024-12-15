W, H, N = map(int, input().split())

# Initialize white area to the area of the whole rectangle
white_area = W * H

# Iterate over the points
for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        # If painting left of x, subtract width of the painted region
        white_area -= x * H
    elif a == 2:
        # If painting right of x, subtract width of the painted region
        white_area -= (W - x) * H
    elif a == 3:
        # If painting below y, subtract height of the painted region
        white_area -= y * W
    elif a == 4:
        # If painting above y, subtract height of the painted region
        white_area -= (H - y) * W

# Print the area of the white region
print(white_area)