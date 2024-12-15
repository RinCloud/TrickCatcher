from itertools import combinations

def build_roads(N, towns):
    min_cost = float('inf')
    for pair in combinations(towns, 2):
        xa, ya = pair[0]
        xb, yb = pair[1]
        cost = min(abs(xa - xb), abs(ya - yb))
        if cost < min_cost:
            min_cost = cost
    return min_cost

# Read input
N = int(input())
towns = []
for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

# Call the function and print the result
print(build_roads(N, towns))