# Given input
N, X, Y = 5, 2, 4

# Create an adjacency matrix for the graph
graph = [[0] * N for _ in range(N)]

for i in range(N - 1):
    graph[i][i + 1] = 1
    graph[i + 1][i] = 1

graph[X - 1][Y - 1] = 1
graph[Y - 1][X - 1] = 1

# Use Floyd-Warshall algorithm to find the shortest distance between all pairs of vertices
distances = [[float('inf')] * N for _ in range(N)]

for i in range(N):
    distances[i][i] = 0

for k in range(N):
    for i in range(N):
        for j in range(N):
            distances[i][j] = min(distances[i][j], distances[i][k] + distances[k][j])

# Count the number of pairs with each shortest distance
counts = [0] * (N - 1)

for i in range(N):
    for j in range(i + 1, N):
        k = distances[i][j]
        if k < N:
            counts[k] += 1

# Print the counts for each k
for count in counts[1:]:
    print(count)