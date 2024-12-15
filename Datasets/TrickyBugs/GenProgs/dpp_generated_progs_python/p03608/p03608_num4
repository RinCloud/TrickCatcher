from itertools import permutations

def minimize_distance(N, M, R, r, roads):
    # Create an adjacency matrix for the graph
    graph = [[float('inf')] * N for _ in range(N)]
    for a, b, c in roads:
        graph[a-1][b-1] = c
        graph[b-1][a-1] = c
    
    # Use Floyd-Warshall algorithm to find the shortest path between every pair of towns
    for k in range(N):
        for i in range(N):
            for j in range(N):
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])
    
    # Generate all possible permutations of visiting order for the given towns
    orders = permutations(r, R)
    
    # Initialize the minimum distance as infinity
    min_distance = float('inf')
    
    # Find the minimum distance for each visiting order
    for order in orders:
        distance = 0
        prev_town = order[0]
        for i in range(1, R):
            curr_town = order[i]
            distance += graph[prev_town-1][curr_town-1]
            prev_town = curr_town
        min_distance = min(min_distance, distance)
    
    return min_distance


# Read input from standard input
N, M, R = map(int, input().split())
r = list(map(int, input().split()))
roads = []
for _ in range(M):
    A, B, C = map(int, input().split())
    roads.append((A, B, C))

# Calculate the minimum distance traveled by road
result = minimize_distance(N, M, R, r, roads)

# Print the result
print(result)