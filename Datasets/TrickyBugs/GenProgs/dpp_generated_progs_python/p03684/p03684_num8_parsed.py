from typing import List

def minimum_cost(n: int, towns: List[List[int]]) -> int:
    # Sort the towns based on x-coordinate
    towns.sort(key=lambda t: t[0])
    
    # Initialize the minimum cost to infinity
    min_cost = float('inf')
    
    # Iterate through all the towns
    for i in range(n-1):
        # Calculate the cost as the absolute difference between y-coordinates of adjacent towns
        cost = abs(towns[i][1] - towns[i+1][1])
        
        # Update the minimum cost if the current cost is lower
        min_cost = min(min_cost, cost)
    
    return min_cost

# Read input
n = int(input())
towns = [list(map(int, input().split())) for _ in range(n)]

# Calculate the minimum cost
result = minimum_cost(n, towns)

# Print the minimum cost
print(result)