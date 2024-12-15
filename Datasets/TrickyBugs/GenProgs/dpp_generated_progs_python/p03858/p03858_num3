from collections import defaultdict

def num_pairs(n, a, b, points):
    distances = defaultdict(int)
    for i in range(n):
        for j in range(i + 1, n):
            d = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])
            distances[(i, j)] = d
    pairs = set()
    for i in range(n):
        for j in range(i + 1, n):
            if distances[(a - 1, j)] == distances[(a - 1, b - 1)] == distances[(i, j)]:
                pairs.add((i, j))
    return len(pairs)

# read input
n, a, b = map(int, input().split())
points = [list(map(int, input().split())) for _ in range(n)]

# calculate and print the number of pairs of pinholes that can be pointed by the compass
print(num_pairs(n, a, b, points))