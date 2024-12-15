from collections import defaultdict

def dfs(v, d):
    visited[v] = True
    for u in graph[v]:
        if not visited[u]:
            if s[u - 1] == '1':
                dfs(u, d + 1)
            else:
                dfs(u, d)

N = int(input())
graph = defaultdict(list)
for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
s = input()
visited = [False] * (N + 1)
dfs(1, 0)

result = 0
for i in range(1, N + 1):
    if visited[i]:
        if s[i - 1] == '1':
            result += 1

print(result)