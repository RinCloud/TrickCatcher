from collections import defaultdict

def count_combinations(N, edges, s):
    # Build adjacency list representation of the tree
    adj_list = defaultdict(list)
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)

    # Initialize visited array and count of black vertices
    visited = [False] * (N + 1)
    black_count = 0

    # Traverse the tree using depth-first search
    def dfs(v, d):
        nonlocal black_count
        visited[v] = True
        if s[v] == '1':
            # If the current vertex is liked by Snuke, increment black_count
            black_count += 1
        if d == 0:
            return
        for u in adj_list[v]:
            if not visited[u]:
                dfs(u, d - 1)

    # Find a vertex liked by Snuke
    start_vertex = None
    for i in range(1, N + 1):
        if s[i] == '1':
            start_vertex = i
            break

    # Perform DFS from the start_vertex
    dfs(start_vertex, N)

    # The number of combinations of colors is equal to 2^black_count
    combinations = pow(2, black_count)

    return combinations

# Read input
N = int(input())
edges = []
for _ in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))
s = input()

# Compute and print the result
result = count_combinations(N, edges, s)
print(result)