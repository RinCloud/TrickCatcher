from math import sqrt

def count_points(N, D, points):
    count = 0
    for i in range(N):
        x, y = points[i]
        distance = sqrt(x**2 + y**2)
        if distance <= D:
            count += 1
    return count

# Read input
N, D = map(int, input().split())

points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Call the function and print the result
result = count_points(N, D, points)
print(result)