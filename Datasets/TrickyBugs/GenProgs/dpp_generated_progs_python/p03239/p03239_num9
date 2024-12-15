import sys

def find_smallest_cost(N, T, routes):
    min_cost = sys.maxsize
    for route in routes:
        cost, time = route
        if time <= T:
            min_cost = min(min_cost, cost)
    if min_cost != sys.maxsize:
        return min_cost
    else:
        return "TLE"

# Read input
N, T = map(int, input().split())
routes = []
for _ in range(N):
    cost, time = map(int, input().split())
    routes.append((cost, time))

# Find smallest cost
result = find_smallest_cost(N, T, routes)

# Print result
print(result)