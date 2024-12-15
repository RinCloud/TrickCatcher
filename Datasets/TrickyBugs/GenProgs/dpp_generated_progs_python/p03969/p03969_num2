def dfs(v, c):
    color[v] = c
    group.append(v)
    for u in graph[v]:
        if color[u] == 0:
            dfs(u, c)
 
N, M, K = map(int, input().split())
MOD = 10**9 + 7
 
graph = [[] for _ in range(N)]
for _ in range(M):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    graph[a].append(b)
    graph[b].append(a)
 
color = [0] * N
answer = pow(K, N, MOD)
for v in range(N):
    if color[v] == 0:
        group = []
        dfs(v, len(group))
        count = 1
        for u in group:
            for w in graph[u]:
                if color[w] == len(group):
                    count = count * (K-1) % MOD
        answer = answer * count % MOD
 
print(answer)