import sys
from collections import deque

# Read N, X, Y from input
N, X, Y = map(int, sys.stdin.readline().split())

# Create an adjacency list to represent the graph
adj_list = [[] for _ in range(N+1)]
for i in range(1, N):
    adj_list[i].append(i+1)
    adj_list[i+1].append(i)
adj_list[X].append(Y)
adj_list[Y].append(X)

# Function to calculate the shortest distance between two vertices
def shortest_distance(start_vertex):
    # Initialize distances with infinity
    dist = [float('inf')] * (N+1)
    # Initialize visited vertices as False
    visited = [False] * (N+1)

    # Create a queue for BFS traversal
    queue = deque()

    # Set distance of start_vertex as 0 and mark it as visited
    dist[start_vertex] = 0
    visited[start_vertex] = True

    # Enqueue start_vertex
    queue.append(start_vertex)

    # BFS traversal
    while queue:
        # Dequeue a vertex from queue
        vertex = queue.popleft()

        # Explore all adjacent vertices of the dequeued vertex
        for adjacent_vertex in adj_list[vertex]:
            # If not visited, mark it as visited and enqueue it
            if not visited[adjacent_vertex]:
                visited[adjacent_vertex] = True
                queue.append(adjacent_vertex)
                # Update the distance of adjacent_vertex
                dist[adjacent_vertex] = dist[vertex] + 1

    return dist

# Iterate over all possible distances k
for k in range(1, N):
    # Calculate shortest distances from each vertex
    distances = shortest_distance(k)
    # Initialize count of pairs with distance k
    count = 0
    # Count number of pairs with distance k
    for i in range(1, N+1):
        for j in range(i+1, N+1):
            if distances[i] == k and distances[j] == k:
                count += 1
    # Print the count of pairs with distance k
    print(count)