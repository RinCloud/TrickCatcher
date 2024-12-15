import sys

def find_smallest_cost(N, T, routes):
    smallest_cost = sys.maxsize
    for route in routes:
        cost, time = route
        if time <= T:
            smallest_cost = min(smallest_cost, cost)
    if smallest_cost == sys.maxsize:
        return "TLE"
    else:
        return smallest_cost

# Read input
N, T = map(int, input().split())
routes = []
for _ in range(N):
    c, t = map(int, input().split())
    routes.append((c, t))

# Call the function and print the result
result = find_smallest_cost(N, T, routes)
print(result)