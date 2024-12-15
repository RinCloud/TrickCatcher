from collections import defaultdict

def dfs(vertex, parent, depth):
    depths[vertex] = depth
    for child in graph[vertex]:
        if child != parent:
            dfs(child, vertex, depth + 1)

def find_parent(vertex):
    if parent[vertex] != vertex:
        parent[vertex] = find_parent(parent[vertex])
    return parent[vertex]

def merge(x, y):
    x = find_parent(x)
    y = find_parent(y)
    if x < y:
        parent[y] = x
    else:
        parent[x] = y

N = int(input())
graph = defaultdict(list)
parent = [i for i in range(N + 1)]
depths = [0] * (N + 1)

for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

dfs(1, -1, 0)

max_depth = max(depths)

for i in range(N - 1):
    a, b = map(int, input().split())
    if depths[a] % 2 == depths[b] % 2:
        print('0 1')
        exit()

for i in range(N - 1):
    a, b = map(int, input().split())
    if depths[a] % 2 != depths[b] % 2 and max(depths[a], depths[b]) == max_depth:
        merge(a, b)

A = 0
B = max_depth // 2

while B > 0 and A < max_depth - B:
    A += 1
    B //= 2

print(A, B)