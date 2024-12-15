n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
    a_connects[x-1].append(y-1)
    a_connects[y-1].append(x-1)

bridge_count = 0
visited = [False] * n
low = [float("inf")] * n
ids = [0] * n
id_counter = 0

def dfs(at, parent):
    global id_counter
    visited[at] = True
    low[at] = ids[at] = id_counter
    id_counter += 1
    for to in a_connects[at]:
        if to == parent:
            continue
        if not visited[to]:
            dfs(to, at)
            low[at] = min(low[at], low[to])
            if ids[at] < low[to]:
                bridge_count += 1
        else:
            low[at] = min(low[at], ids[to])

dfs(0, -1)
print(bridge_count)