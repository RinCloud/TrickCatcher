from itertools import permutations

# Function to calculate the distance traveled by road
def calculate_distance(N, M, R, towns, roads):
    # Create a distance matrix to store the distance between towns
    distance = [[float('inf') for _ in range(N+1)] for _ in range(N+1)]
    for i in range(N+1):
        distance[i][i] = 0
        
    # Fill the distance matrix with road lengths
    for a, b, c in roads:
        distance[a][b] = c
        distance[b][a] = c
    
    # Use the Floyd-Warshall algorithm to find the shortest distances between all pairs of towns
    for k in range(N+1):
        for i in range(N+1):
            for j in range(N+1):
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])
    
    # Initialize the minimum distance as infinity
    min_distance = float('inf')
    
    # Generate all permutations of the R towns
    town_permutations = permutations(towns)
    
    # Iterate over all permutations and calculate the total distance traveled by road
    for perm in town_permutations:
        perm_distance = 0
        prev_town = 1
        for town in perm:
            perm_distance += distance[prev_town][town]
            prev_town = town
        perm_distance += distance[prev_town][1]
        min_distance = min(min_distance, perm_distance)
    
    return min_distance
    
# Read input from stdin
N, M, R = map(int, input().strip().split())
towns = list(map(int, input().strip().split()))
roads = [list(map(int, input().strip().split())) for _ in range(M)]

# Calculate the distance traveled by road
result = calculate_distance(N, M, R, towns, roads)

# Print the result
print(result)