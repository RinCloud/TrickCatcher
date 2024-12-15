from collections import defaultdict

def operation_count(N, points):
    count = 0
    dot_count = defaultdict(int)

    for x, y in points:
        dot_count[(x, y)] = 1

    for i in range(N):
        for j in range(i+1, N):
            xi, yi = points[i]
            xj, yj = points[j]

            dx = xj - xi
            dy = yj - yi

            a = (xi + dy, yi - dx)
            b = (xi - dy, yi + dx)
            c = (xj + dy, yj - dx)
            d = (xj - dy, yj + dx)

            count += dot_count[a] + dot_count[b] + dot_count[c] + dot_count[d]

    return count

N = int(input())
points = [tuple(map(int, input().split())) for _ in range(N)]
result = operation_count(N, points)
print(result)