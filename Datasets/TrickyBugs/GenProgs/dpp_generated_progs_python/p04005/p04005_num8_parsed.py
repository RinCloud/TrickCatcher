from math import ceil

A, B, C = map(int, input().split())
minimum_difference = float('inf')

# Calculate the minimum possible difference for each possible split along each axis
for i in range(1, A):
    for j in range(1, B):
        for k in range(1, C):
            red_blocks = i * B * C + (A - i) * j * C + (A - i) * (B - j) * k
            blue_blocks = (A - i) * (B - j) * (C - k)
            minimum_difference = min(minimum_difference, abs(red_blocks - blue_blocks))

print(minimum_difference)