n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
	a_connects[x-1].append(y-1)
	a_connects[y-1].append(x-1)

visited = [False] * n
low = [0] * n
ids = [0] * n
id = 0

def dfs(at, parent):
    global id
    
    visited[at] = True
    low[at] = ids[at] = id
    id += 1
    
    for to in a_connects[at]:
        if to == parent:
            continue
        if not visited[to]:
            dfs(to, at)
            low[at] = min(low[at], low[to])
        else:
            low[at] = min(low[at], ids[to])

bridge_count = 0
for i in range(n):
    if not visited[i]:
        dfs(i, -1)

for i in range(n):
    if low[i] == ids[i] and ids[i] != 0:
        bridge_count += 1
        
print(bridge_count)