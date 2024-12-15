import math

N, D = map(int, input().split())
points = []

for _ in range(N):
    X, Y = map(int, input().split())
    points.append((X, Y))

count = 0

for point in points:
    distance = math.sqrt(point[0]**2 + point[1]**2)
    if distance <= D:
        count += 1

print(count)