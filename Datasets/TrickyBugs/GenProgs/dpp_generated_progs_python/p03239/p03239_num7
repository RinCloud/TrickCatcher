from sys import stdin

N, T = map(int, stdin.readline().split())
costs = []
times = []

for _ in range(N):
    c, t = map(int, stdin.readline().split())
    costs.append(c)
    times.append(t)

min_cost = float('inf')

for c, t in zip(costs, times):
    if t <= T and c < min_cost:
        min_cost = c

if min_cost == float('inf'):
    print("TLE")
else:
    print(min_cost)