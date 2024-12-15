import math

def max_distance(flags):
    min_distance = float('inf')
    for i in range(len(flags)):
        for j in range(i + 1, len(flags)):
            x1, y1 = flags[i]
            x2, y2 = flags[j]
            d = max(abs(x2 - x1), abs(y2 - y1))
            min_distance = min(min_distance, d)
    return min_distance

# Read input
N = int(input())
flags = []
for _ in range(N):
    x, y = map(int, input().split())
    flags.append((x, y))

# Calculate and print the maximum possible distance
print(max_distance(flags))