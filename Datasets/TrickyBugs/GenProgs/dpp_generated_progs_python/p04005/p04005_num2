# Program:

A, B, C = map(int, input().split())
minimum_difference = float('inf')

# Check all possible splits with each dimension as the splitting dimension
for i in range(1, A):
    for j in range(1, B):
        for k in range(1, C):
            # Calculate the number of blocks in the red and blue parallelepiped for each split
            red_blocks = i * B * C + j * (A - i) * C + k * (A - i) * (B - j)
            blue_blocks = (A * B * C) - red_blocks

            # Update the minimum difference if the current split gives a smaller difference
            minimum_difference = min(minimum_difference, abs(red_blocks - blue_blocks))

print(minimum_difference)