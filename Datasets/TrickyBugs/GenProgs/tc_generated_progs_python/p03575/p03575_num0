n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
    a_connects[x-1].append(y-1)
    a_connects[y-1].append(x-1)

a_connect_sums = [len(connect) for connect in a_connects]
bridge_count = 0
visited = [False] * n

def dfs(v, prev):
    global bridge_count
    visited[v] = True
    for u in a_connects[v]:
        if visited[u]:
            continue
        dfs(u, v)
    if prev != -1 and not visited[prev]:
        bridge_count += 1

dfs(0, -1)
print(bridge_count)