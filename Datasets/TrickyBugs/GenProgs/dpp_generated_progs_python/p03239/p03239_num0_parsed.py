N, T = map(int, input().split())

routes = []
for _ in range(N):
    c, t = map(int, input().split())
    routes.append((c, t))

min_cost = float('inf')
for route in routes:
    if route[1] <= T:
        min_cost = min(min_cost, route[0])

if min_cost == float('inf'):
    print("TLE")
else:
    print(min_cost)