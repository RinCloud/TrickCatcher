def calculate_max_distance(N, positions):
    positions.sort()
    max_distance = 0
    for i in range(N - 1):
        distance = abs(positions[i] - positions[i + 1])
        if distance > max_distance:
            max_distance = distance
    return max_distance

N = int(input())
positions = []
for _ in range(N):
    x, y = map(int, input().split())
    positions.append(x)
    positions.append(y)

print(calculate_max_distance(N, positions))