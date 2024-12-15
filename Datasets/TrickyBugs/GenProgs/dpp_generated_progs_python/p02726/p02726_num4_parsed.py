# Generating code based on the given program intention

from collections import deque

def calculate_shortest_distances(N, X, Y):
    # Constructing the graph
    graph = [[] for _ in range(N + 1)]
    for i in range(1, N):
        graph[i].append(i + 1)
        graph[i + 1].append(i)
    graph[X].append(Y)
    graph[Y].append(X)
    
    # Calculating shortest distances
    shortest_distances = [0] * (N + 1)
    for i in range(1, N + 1):
        visited = [False] * (N + 1)
        distance = [float('inf')] * (N + 1)
        queue = deque()
        visited[i] = True
        distance[i] = 0
        queue.append(i)
        
        while queue:
            node = queue.popleft()
            for neighbor in graph[node]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    distance[neighbor] = distance[node] + 1
                    queue.append(neighbor)
        
        for j in range(i + 1, N + 1):
            shortest_distances[distance[j]] += 1
    
    return shortest_distances[1:]

# Reading input
N, X, Y = map(int, input().split())

# Calculating and printing the shortest distances
shortest_distances = calculate_shortest_distances(N, X, Y)
for distance in shortest_distances:
    print(distance)