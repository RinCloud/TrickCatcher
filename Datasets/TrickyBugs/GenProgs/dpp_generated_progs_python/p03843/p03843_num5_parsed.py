N = int(input())
edges = [[] for _ in range(N+1)]
for _ in range(N-1):
    a, b = map(int, input().split())
    edges[a].append(b)
    edges[b].append(a)
s = input().strip()

def dfs(v, p, d, color):
    if s[v-1] == '1':
        color[v] = True
    for u in edges[v]:
        if u != p:
            dfs(u, v, d+1, color)
    if d == 0:
        color[v] = False

color = [False] * (N+1)
dfs(s.index('1')+1, -1, 0, color)
ans = color.count(True) * 2 - 1
print(ans)