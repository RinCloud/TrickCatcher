import sys

N, T = map(int, sys.stdin.readline().split())

routes = []
for _ in range(N):
    c, t = map(int, sys.stdin.readline().split())
    routes.append((c, t))

min_cost = float('inf')
for c, t in routes:
    if t <= T:
        min_cost = min(min_cost, c)

if min_cost == float('inf'):
    print("TLE")
else:
    print(min_cost)