# Program

# Read input
N = int(input())
red_points = []
blue_points = []

for _ in range(N):
    a, b = map(int, input().split())
    red_points.append((a, b))

for _ in range(N):
    c, d = map(int, input().split())
    blue_points.append((c, d))

# Sort the points by x-coordinate
red_points.sort()
blue_points.sort()

# Count the number of friendly pairs
count = 0

for i in range(N):
    for j in range(N):
        if red_points[i][0] < blue_points[j][0] and red_points[i][1] < blue_points[j][1]:
            count += 1
            break

# Print the maximum number of friendly pairs
print(count)