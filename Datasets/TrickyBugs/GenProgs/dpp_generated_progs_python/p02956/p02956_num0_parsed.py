import itertools

def solve(N, points):
    MOD = 998244353
    
    # Sort points based on x-coordinate
    sorted_points = sorted(points, key=lambda p: p[0])
    
    # Compute prefix sums of x-coordinates and y-coordinates
    prefix_sum_x = [0]
    prefix_sum_y = [0]
    for i in range(N):
        prefix_sum_x.append(prefix_sum_x[i] + sorted_points[i][0])
        prefix_sum_y.append(prefix_sum_y[i] + sorted_points[i][1])
    
    # Compute the sum of f(T) over all non-empty subset T of S
    result = 0
    for i in range(N):
        for j in range(i, N):
            # Compute the number of points in the smallest rectangle
            # that contains all the points in T
            a = sorted_points[i][0]
            b = sorted_points[j][0]
            
            # Find the minimum y-coordinate and maximum y-coordinate
            c = min(sorted_points[k][1] for k in range(i, j+1))
            d = max(sorted_points[k][1] for k in range(i, j+1))
            
            # Compute f(T) based on the prefix sums
            count = (prefix_sum_x[j+1] - prefix_sum_x[i]) % MOD
            count = (count * (prefix_sum_y[j+1] - prefix_sum_y[i] + MOD)) % MOD
            result = (result + count) % MOD
    
    return result

# Read input
N = int(input())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Solve the problem and print the result
result = solve(N, points)
print(result)