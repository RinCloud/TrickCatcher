from collections import defaultdict


# Function to find the parent of a node in the disjoint set
def find_parent(parent, node):
    if parent[node] == -1:
        return node
    parent[node] = find_parent(parent, parent[node])
    return parent[node]


# Function to join two sets
def union(parent, rank, x, y):
    x_parent = find_parent(parent, x)
    y_parent = find_parent(parent, y)

    if rank[x_parent] < rank[y_parent]:
        parent[x_parent] = y_parent
    elif rank[x_parent] > rank[y_parent]:
        parent[y_parent] = x_parent
    else:
        parent[y_parent] = x_parent
        rank[x_parent] += 1


# Function to check if there exists a path
def check_path(graph, n, mod, s, t, r):
    parent = [-1] * (n + 1)
    rank = [0] * (n + 1)

    # Iterate over each edge and join the sets
    for u, v, c in graph:
        if c % mod == 0:
            union(parent, rank, u, v)

    # Check if there exists a path from s to t of length r
    s_parent = find_parent(parent, s)
    t_parent = find_parent(parent, t)

    if s_parent == t_parent:
        path_length = 0
        while s != t:
            for u, v, c in graph:
                if find_parent(parent, u) == s and find_parent(parent, v) == t:
                    if path_length == 0:
                        path_length += c
                    else:
                        path_length += c * (2 ** (path_length - 1))
                    break
            s = v
        if path_length % mod == r:
            return "YES"
    
    return "NO"


# Read input values
n, m, q, mod = map(int, input().split())

graph = []
for _ in range(m):
    a, b, c = map(int, input().split())
    graph.append((a, b, c))

queries = []
for _ in range(q):
    s, t, r = map(int, input().split())
    queries.append((s, t, r))

# Iterate over each query and check if there exists a path
for s, t, r in queries:
    print(check_path(graph, n, mod, s, t, r))