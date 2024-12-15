import itertools

# Read the input
N = int(input())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Sort the points based on x-coordinate
points.sort(key=lambda point: point[0])

# Initialize variables
MOD = 998244353
result = 0

# Iterate through all possible subsets of points
for i in range(1, N+1):
    subsets = itertools.combinations(points, i)
    for subset in subsets:
        min_x, max_x = subset[0][0], subset[0][0]
        min_y, max_y = subset[0][1], subset[0][1]
        for point in subset:
            min_x = min(min_x, point[0])
            max_x = max(max_x, point[0])
            min_y = min(min_y, point[1])
            max_y = max(max_y, point[1])
        f_T = 0
        for point in points:
            if min_x <= point[0] <= max_x and min_y <= point[1] <= max_y:
                f_T += 1
        result += f_T

# Print the result modulo 998244353
print(result % MOD)