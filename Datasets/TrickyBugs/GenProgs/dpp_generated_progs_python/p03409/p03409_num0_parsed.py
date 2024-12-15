import sys

# Read N
N = int(sys.stdin.readline().strip())

# Initialize counters
count = 0
red_points = []
blue_points = []

# Read red points
for _ in range(N):
    a, b = map(int, sys.stdin.readline().split())
    red_points.append((a, b))

# Read blue points
for _ in range(N):
    c, d = map(int, sys.stdin.readline().split())
    blue_points.append((c, d))

# Sort red points by x-coordinate (increasing order)
red_points.sort()
# Sort blue points by y-coordinate (increasing order)
blue_points.sort(key=lambda point: point[1])

# Iterate over red and blue points
for red in red_points:
    for blue in blue_points:
        # Check if red point is smaller than blue point in both x and y coordinates
        if red[0] < blue[0] and red[1] < blue[1]:
            count += 1
            # Break the loop as a point cannot belong to multiple pairs
            break

# Print the maximum number of friendly pairs
print(count)