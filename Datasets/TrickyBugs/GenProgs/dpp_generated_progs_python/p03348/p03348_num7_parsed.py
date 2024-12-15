# Program to find the minimum colorfulness of a tree T and the minimum number of leaves in a tree that achieves it

from collections import defaultdict

# Function to add an edge to the graph
def add_edge(graph, u, v):
    graph[u].append(v)
    graph[v].append(u)


# Function to calculate the colorfulness and minimum number of leaves of a tree T
def minimum_colorfulness(graph, n):
    colorfulness = float('inf')
    num_leaves = 0

    # Helper function to perform DFS and calculate the colorfulness and number of leaves
    def dfs(v, parent, colors):
        nonlocal colorfulness, num_leaves

        # Count occurrences of each color
        color_counts = defaultdict(int)
        for u in graph[v]:
            if u != parent:
                color_counts[colors[u]] += 1

        # Calculate the colorfulness
        colorfulness = min(colorfulness, len(color_counts))

        # Count number of leaves
        if len(graph[v]) == 1:
            num_leaves += 1
            
        # Recursively call DFS on each child vertex
        for u in graph[v]:
            if u != parent:
                while colors[u] in color_counts:
                    colors[u] += 1
                dfs(u, v, colors)

    # Start DFS from vertex 1
    colors = [0] * (n+1)
    dfs(1, 0, colors)
    
    return colorfulness, num_leaves


# Main code
if __name__ == "__main__":
    # Read input
    n = int(input())
    graph = defaultdict(list)
    for _ in range(n-1):
        u, v = map(int, input().split())
        add_edge(graph, u, v)

    # Calculate minimum colorfulness and minimum number of leaves
    colorfulness, num_leaves = minimum_colorfulness(graph, n)

    # Print output
    print(colorfulness, num_leaves)