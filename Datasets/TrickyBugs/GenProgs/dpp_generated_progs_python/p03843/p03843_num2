'''
from collections import defaultdict

def dfs(v, d, colors, graph, likes):
    if v in colors:
        return
    colors.add(v)
    if likes[v]:
        d = 1
    for u in graph[v]:
        dfs(u, d + 1, colors, graph, likes)

N = int(input())
graph = defaultdict(list)

for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a].append[b]
    graph[b].append[a]

likes = list(map(int, input()))
colors = set()

dfs(likes.index(1) + 1, 0, colors, graph, likes)

print(len(colors))
'''