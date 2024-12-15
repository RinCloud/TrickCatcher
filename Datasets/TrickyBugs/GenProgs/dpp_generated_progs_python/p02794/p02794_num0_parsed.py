from collections import defaultdict

def dfs(node, parent, tree, visited, colors):
    visited[node] = True
    count_black = 0
    for child in tree[node]:
        if not visited[child]:
            color = dfs(child, node, tree, visited, colors)
            count_black += color
    colors[node] = count_black % 2
    return count_black

N = int(input())
tree = defaultdict(list)
for _ in range(N-1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)

M = int(input())
restrictions = []
for _ in range(M):
    u, v = map(int, input().split())
    restrictions.append((u, v))

visited = [False] * (N+1)
colors = [0] * (N+1)
dfs(1, 0, tree, visited, colors)

valid_count = 2**(N-1)
for u, v in restrictions:
    if (colors[u] == 0) and (colors[v] == 0):
        valid_count = 0
        break

print(valid_count)