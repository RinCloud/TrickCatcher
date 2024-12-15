from collections import defaultdict

def dfs(i, pred, g):
    if i in pred:
        return
    pred[i]=1
    for j in g[i]:
        if j in pred:
            continue
        dfs(j, pred, g)

# read input
N = int(input())
g=defaultdict(set)
for _ in range(N-1):
    u, v = map(int, input().split())
    g[u].add(v)
    g[v].add(u)
M = int(input())
path_set=set()
for _ in range(M):
    u, v = map(int, input().split())
    # check if u,v lies in same connected component
    pred = {}
    dfs(u, pred, g)
    if v not in pred:
        path_set.add((u,v))

ans = 0
# iterate over all possible ways of painting the edges
for i in range(1, 2**(N-1)):
    black_edges = []
    for j in range(N-1):
        if i & (1<<j):
            black_edges.append((j+1, j+2))

    # check if all restrictions are satisfied
    satisfied=True
    for edge in path_set:
        a, b = edge
        if not ((a,b) in black_edges or (b,a) in black_edges):
            satisfied = False
            break
    if satisfied:
        ans+=1

print(ans)