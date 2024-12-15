# Here is the complete program to solve the given problem

# Read the input values
N, T = map(int, input().split())
routes = []
for _ in range(N):
    c, t = map(int, input().split())
    routes.append((c, t))

# Sort the routes based on their time in ascending order
routes.sort(key=lambda x: x[1])

# Find the smallest cost route that takes not longer than time T
min_cost = float('inf')
for c, t in routes:
    if t <= T:
        min_cost = min(min_cost, c)

# Print the result
if min_cost == float('inf'):
    print("TLE")
else:
    print(min_cost)