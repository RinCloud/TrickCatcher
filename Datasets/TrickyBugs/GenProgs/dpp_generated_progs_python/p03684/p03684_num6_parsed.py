from itertools import combinations

def min_road_cost(N, towns):
    min_cost = float('inf')
    
    # Iterate through all possible combinations of towns
    for i in range(1, N+1):
        for comb in combinations(towns, i):
            # Calculate the minimum cost for this combination of towns
            cost = calculate_cost(comb)
            # Update the minimum cost if necessary
            if cost < min_cost:
                min_cost = cost
    
    return min_cost

def calculate_cost(towns):
    min_x = float('inf')
    min_y = float('inf')
    max_x = float('-inf')
    max_y = float('-inf')
    
    # Find the minimum and maximum x and y coordinates
    for town in towns:
        min_x = min(min_x, town[0])
        min_y = min(min_y, town[1])
        max_x = max(max_x, town[0])
        max_y = max(max_y, town[1])
    
    # Calculate the minimum cost between the minimum and maximum x and y coordinates
    cost = min(max_x - min_x, max_y - min_y)
    
    return cost

# Read the input
N = int(input())
towns = []
for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

# Calculate the minimum necessary amount of money
min_cost = min_road_cost(N, towns)

# Print the result
print(min_cost)