# Function to find the number of bridge edges
def find_bridge_edges(N, M, edges):
    # Initialize the count of bridge edges to 0
    bridge_count = 0

    # Function to perform DFS for finding bridges
    def dfs(source, parent, visited, disc, low, bridges):
        global time

        # Mark the current node as visited
        visited[source] = True

        # Initialize discovery time and low value
        disc[source] = time
        low[source] = time
        time += 1

        # Iterate over all adjacent vertices of the current source vertex
        for neighbor in edges[source]:
            # If neighbor is not visited, then recur for it
            if visited[neighbor] == False:
                parent[neighbor] = source
                dfs(neighbor, parent, visited, disc, low, bridges)

                # Check if the subtree rooted with neighbor has a connection to the ancestors of the source
                low[source] = min(low[source], low[neighbor])

                # If the lowest vertex reachable from subtree under neighbor is below source in DFS tree, then it is a bridge
                if low[neighbor] > disc[source]:
                    bridges.append((source, neighbor))
                    bridge_count += 1

            # Update low value of source for parent function calls
            elif parent[source] != neighbor:
                low[source] = min(low[source], disc[neighbor])

    # Create a list of empty adjacency lists representing the graph
    edges = [[] for _ in range(N + 1)]

    # Add edges to the graph
    for edge in edges:
        a, b = edge
        edges[a].append(b)
        edges[b].append(a)

    # Create arrays to store visited status, discovery time, low value, parent vertex and bridges
    visited = [False] * (N + 1)
    disc = [float('inf')] * (N + 1)
    low = [float('inf')] * (N + 1)
    parent = [-1] * (N + 1)
    bridges = []

    # Initialize time
    time = 0

    # Perform DFS starting from any vertex
    dfs(1, parent, visited, disc, low, bridges)

    # Return the count of bridge edges
    return bridge_count

# Get input from standard input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b = map(int, input().split())
    edges.append((a, b))

# Call the function to find the number of bridge edges
bridge_count = find_bridge_edges(N, M, edges)

# Print the number of bridge edges
print(bridge_count)