'''
This problem can be solved using a depth-first search (DFS) technique.

First, we will represent the tree using an adjacency list.

Then, we will perform a DFS starting from any vertex that Snuke likes.

During the DFS, we will keep track of the maximum distance from the starting vertex to each vertex.

Finally, we will count the number of unique distances and print the result.

Below is the implementation of the solution:
'''

from collections import defaultdict

# Define a function to perform the DFS
def dfs(node, distance, graph, distances, visited):
    visited[node] = True
    distances[distance] += 1
    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(neighbor, distance + 1, graph, distances, visited)

# Read the input
N = int(input())
graph = defaultdict(list)
for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
s = input().strip()

# Find the starting vertex for the DFS
start = s.index('1') + 1

# Initialize variables
distances = defaultdict(int)
visited = [False] * (N + 1)

# Perform the DFS
dfs(start, 0, graph, distances, visited)

# Count the number of unique distances
count = len(distances)

# Print the result
print(count)