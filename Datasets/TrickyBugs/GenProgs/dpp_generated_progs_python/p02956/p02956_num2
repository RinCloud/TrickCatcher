from itertools import combinations

# Read N
N = int(input())

# Read the points
points = [list(map(int, input().split())) for _ in range(N)]

# Initialize the sum of f(T) to 0
sum_f_T = 0

# Iterate over all possible subsets T of S
for size in range(1, N+1):
    for subset in combinations(points, size):
        # Find the minimum and maximum x-coordinates and y-coordinates of the points in T
        min_x = min(point[0] for point in subset)
        max_x = max(point[0] for point in subset)
        min_y = min(point[1] for point in subset)
        max_y = max(point[1] for point in subset)
        
        # Calculate and add f(T) to the sum
        f_T = sum(1 for point in points if min_x <= point[0] <= max_x and min_y <= point[1] <= max_y)
        sum_f_T += f_T

# Print the sum of f(T) modulo 998244353
print(sum_f_T % 998244353)