from collections import defaultdict

# Function to perform depth first search to calculate the minimum cost
def dfs(node, graph, A, B, W, visited):
    visited[node] = True
    W = min(A[node], W) # Update W with the minimum amount required for the current node

    for neighbor in graph[node]:
        if not visited[neighbor]:
            W = dfs(neighbor, graph, A, B, W, visited) # Recursive call to explore the neighboring nodes

    if W < B[node]:
        return A[node]
    else:
        return W - B[node] + A[node]

# Read input values
N, M = map(int, input().split())

# Read the Ai, Bi values and store them in lists A and B
A = [0] * (N+1)
B = [0] * (N+1)
for i in range(1, N+1):
    A[i], B[i] = map(int, input().split())

# Create dictionary to store the adjacency list representation of the graph
graph = defaultdict(list)

# Read the Ui, Vi values and construct the graph
for i in range(M):
    U, V = map(int, input().split())
    graph[U].append(V)
    graph[V].append(U)

# Initialize visited list
visited = [False] * (N+1)

# Perform depth first search from each node and keep track of the minimum cost
min_cost = float('inf')
for i in range(1, N+1):
    if not visited[i]:
        min_cost = min(min_cost, dfs(i, graph, A, B, A[i], visited))

# Print the smallest initial amount of money W that enables you to win the game
print(min_cost)