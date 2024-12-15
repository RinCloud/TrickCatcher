# Program to find the number of bridges in a given undirected connected graph

# Function to perform Depth First Search (DFS) from a given node
def dfs(graph, visited, disc, low, parent, u):
    
    # Initialize discovery time and low value
    disc[u] = dfs.time
    low[u] = dfs.time
    dfs.time += 1

    # Mark the current node as visited
    visited[u] = True

    # Traverse all adjacent vertices of the current node
    for v in graph[u]:

        # If v is not visited yet, then recursively visit it
        if visited[v] == False:
            parent[v] = u
            dfs(graph, visited, disc, low, parent, v)

            # Check if the subtree rooted with v has a connection to one of the ancestors of u
            low[u] = min(low[u], low[v])

            # If the lowest vertex reachable from the subtree rooted at v is below u in the DFS tree, then v-u is a bridge
            if low[v] > disc[u]:
                bridges.append((u, v))

        # Update low value of u for parent function calls
        elif v != parent[u]:
            low[u] = min(low[u], disc[v])

# Function to find the number of bridges in the given graph
def findBridges(graph, V):
    
    # Initialize visited, discovery time, low value and parent arrays
    visited = [False] * V
    disc = [float("Inf")] * V
    low = [float("Inf")] * V
    parent = [-1] * V

    # Initialize time
    dfs.time = 0

    # Traverse all vertices and call the DFS function if not visited already
    for i in range(V):
        if visited[i] == False:
            dfs(graph, visited, disc, low, parent, i)

    # Return the number of bridges found
    return len(bridges)


# Read the input values
N, M = map(int, input().split())

# Initialize the graph as an empty dictionary
graph = {i: [] for i in range(N)}

# Read the edges and add them to the graph
for _ in range(M):
    a, b = map(int, input().split())
    graph[a-1].append(b-1)
    graph[b-1].append(a-1)

# Initialize the list to store the bridges
bridges = []

# Find the number of bridges in the given graph
num_bridges = findBridges(graph, N)

# Print the output
print(num_bridges)