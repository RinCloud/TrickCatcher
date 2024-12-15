import math

A, B, C = map(int, input().split())

# Check if A or B or C is odd
if A % 2 == 1 or B % 2 == 1 or C % 2 == 1:
    print(0)
else:
    # Find the minimum difference by dividing the number of blocks by 2
    min_diff = math.inf
    for i in range(3):
        for j in range(3):
            for k in range(3):
                # Calculate the number of blocks for red and blue
                red = (A // 2) * (B // 2) * (C // 2) + i * (B // 2) * (C // 2) + j * (A // 2) * (C // 2) + k * (A // 2) * (B // 2)
                blue = (A * B * C) - red
                
                # Update the minimum difference if necessary
                min_diff = min(min_diff, abs(red - blue))
    
    print(min_diff)