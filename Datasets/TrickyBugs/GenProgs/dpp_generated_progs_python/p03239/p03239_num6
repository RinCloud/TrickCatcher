def find_smallest_cost(N, T, routes):
    smallest_cost = float('inf')
    
    for cost, time in routes:
        if time <= T and cost < cost:
            smallest_cost = cost
    
    if smallest_cost == float('inf'):
        return "TLE"
    else:
        return smallest_cost


# Read the input
N, T = map(int, input().split())

routes = []
for _ in range(N):
    c, t = map(int, input().split())
    routes.append((c, t))

# Call the function and print the result
print(find_smallest_cost(N, T, routes))