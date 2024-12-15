import sys
from collections import defaultdict
from math import factorial

MOD = 10**9 + 7

def dfs(node, parent, graph, sizes):
    sizes[node] = 1
    for child in graph[node]:
        if child != parent:
            dfs(child, node, graph, sizes)
            sizes[node] += sizes[child]

def solve(N, edges):
    graph = defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)

    sizes = [0] * (N + 1)
    dfs(1, 0, graph, sizes)

    fact = [1]
    for i in range(1, N + 1):
        fact.append(fact[-1] * i % MOD)

    inv_fact = [pow(fact[N], MOD - 2, MOD)]
    for i in range(N, 0, -1):
        inv_fact.append(inv_fact[-1] * i % MOD)
    inv_fact.reverse()

    res = []
    res.append(sizes[1])
    for k in range(2, N + 1):
        ans = fact[N - 1]
        for child in graph[k]:
            if child != 1:
                ans = ans * inv_fact[sizes[child]] % MOD
        res.append(ans)

    return res

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    edges = []
    for _ in range(N - 1):
        a, b = map(int, sys.stdin.readline().split())
        edges.append((a, b))

    ans = solve(N, edges)
    for a in ans:
        print(a)