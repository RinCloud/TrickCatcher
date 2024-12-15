import math

def count_points_within_distance(N, D, points):
    count = 0
    for i in range(N):
        x, y = points[i]
        distance = math.sqrt(x**2 + y**2)
        if distance <= D:
            count += 1
    return count

# Reading the input
N, D = map(int, input().split())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Counting the points within distance D
result = count_points_within_distance(N, D, points)

# Printing the result
print(result)