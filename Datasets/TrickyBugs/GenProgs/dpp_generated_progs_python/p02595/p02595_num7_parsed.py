import math

def count_points_within_distance(N, D, coordinates):
    count = 0
    for i in range(N):
        x, y = coordinates[i]
        distance = math.sqrt(x**2 + y**2)
        if distance <= D:
            count += 1
    return count

# Read input
N, D = map(int, input().split())
coordinates = []
for _ in range(N):
    x, y = map(int, input().split())
    coordinates.append((x, y))

# Count points within distance
result = count_points_within_distance(N, D, coordinates)

# Print result
print(result)