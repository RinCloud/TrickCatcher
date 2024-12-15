from collections import defaultdict

def dfs(v, p, graph, lengths, mod):
    lengths[v] = defaultdict(int)
    lengths[v][0] = 0
    for u, w in graph[v]:
        if u == p:
            continue
        dfs(u, v, graph, lengths, mod)
        for j in range(mod):
            lengths[v][(j + 1) % mod] = (lengths[v][(j + 1) % mod] + lengths[u][j] + (w * (2 ** j)) % mod) % mod

def solve(n, m, q, mod, edges, queries):
    graph = defaultdict(list)
    lengths = [defaultdict(int) for _ in range(n + 1)]
    for u, v, w in edges:
        graph[u].append((v, w % mod))
        graph[v].append((u, w % mod))

    dfs(1, -1, graph, lengths, mod)

    ans = []
    for s, t, r in queries:
        if lengths[s][r % mod] == lengths[t][r % mod]:
            ans.append("YES")
        else:
            ans.append("NO")
    return ans

if __name__ == "__main__":
    n, m, q, mod = map(int, input().split())
    edges = []
    for _ in range(m):
        u, v, w = map(int, input().split())
        edges.append((u, v, w))
    queries = []
    for _ in range(q):
        s, t, r = map(int, input().split())
        queries.append((s, t, r))
    ans = solve(n, m, q, mod, edges, queries)
    print("\n".join(ans))