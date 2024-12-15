from collections import defaultdict

def dfs(node, parent, depth, max_depth):
    depths[node] = depth
    max_depth = max(max_depth, depth)
    for neigh in graph[node]:
        if neigh != parent:
            max_depth = dfs(neigh, node, depth+1, max_depth)
    return max_depth

def find_centroid(node, parent, size):
    for neigh in graph[node]:
        if neigh != parent and subtree_sizes[neigh] > size // 2:
            return find_centroid(neigh, node, size)
    return node

def decompose(node, parent):
    size = dfs_sizes[node]
    centroid = find_centroid(node, parent, size)
    centroids[node] = centroid
    for neigh in graph[node]:
        if neigh != parent:
            graph[neigh].remove(node)
            graph[node].remove(neigh)
            decompose(neigh, centroid)

def calculate_path_lengths(node, parent, length, max_length):
    path_lengths[centroids[node]].append(length)
    max_length = max(max_length, length)
    for neigh in graph[node]:
        if neigh != parent:
            max_length = calculate_path_lengths(neigh, node, length+1, max_length)
    return max_length

def compute_path_lengths():
    max_length = 0
    for centroid in centroids:
        max_length = calculate_path_lengths(centroid, -1, 0, max_length)
    return max_length


N = int(input())
graph = defaultdict(list)
for _ in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

depths = [0] * (N+1)
dfs_sizes = [0] * (N+1)
subtree_sizes = [0] * (N+1)
centroids = [0] * (N+1)
path_lengths = defaultdict(list)

dfs(1, -1, 0, 0)
decompose(1, -1)
max_length = compute_path_lengths()

A = 0
for centroid in centroids:
    path_lengths[centroid].sort()
    if len(path_lengths[centroid]) <= 1:
        continue
    if path_lengths[centroid][-2] + 1 <= max_length:
        A = max(A, len(path_lengths[centroid]) - 1)

B = max_length // 2 + 1

print(A, B)