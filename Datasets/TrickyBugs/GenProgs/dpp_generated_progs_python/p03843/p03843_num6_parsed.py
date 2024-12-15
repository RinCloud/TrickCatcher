from collections import defaultdict

N = int(input())
edges = defaultdict(list)
for _ in range(N-1):
    a, b = map(int, input().split())
    edges[a].append(b)
    edges[b].append(a)
favorite = input()

def dfs(v, p, d):
    if d == 0 or favorite[v-1] == '1':  # if d=0 or the vertex is favorite, paint black
        color[v] = 1
    else:
        color[v] = -1
    for u in edges[v]:
        if u == p:
            continue
        dfs(u, v, d-1)

color = [0] * (N+1)
dfs(1, -1, N-1)

res = 0
for v in color:
    if v == 1:  # count black vertices
        res += 1

print(res)