def minimum_cost(N, towns):
    # Find the minimum and maximum x and y coordinates
    min_x = float('inf')
    max_x = float('-inf')
    min_y = float('inf')
    max_y = float('-inf')
    
    for town in towns:
        x, y = town
        min_x = min(min_x, x)
        max_x = max(max_x, x)
        min_y = min(min_y, y)
        max_y = max(max_y, y)
    
    # Calculate the minimum cost by subtracting the minimum x or y from the maximum x or y
    cost = max(max_x - min_x, max_y - min_y)
    
    return cost


# Read the input
N = int(input())
towns = []
for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

# Calculate the minimum cost
minimum_cost = minimum_cost(N, towns)

# Print the result
print(minimum_cost)