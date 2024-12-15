import sys

N = int(input())
edges = [list(map(int, input().split())) for _ in range(N-1)]

adj_list = [[] for _ in range(N+1)]
for u, v in edges:
    adj_list[u].append(v)
    adj_list[v].append(u)

MOD = 10**9 + 7

sz = [0] * (N + 1)
ways = [0] * (N + 1)

def dfs(v, p):
    sz[v] = 1
    ways[v] = 1
    for u in adj_list[v]:
        if u == p:
            continue
        dfs(u, v)
        sz[v] += sz[u]
        ways[v] = ways[v] * ways[u] % MOD
    ways[v] = ways[v] * pow(sz[v], MOD-2, MOD) % MOD

def solve():
    dfs(1, 0)
    for k in range(1, N+1):
        ans = ways[k] * sz[k] % MOD
        print(ans)

solve()