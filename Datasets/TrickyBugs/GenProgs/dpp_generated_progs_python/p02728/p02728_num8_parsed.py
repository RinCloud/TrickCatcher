from collections import defaultdict
from math import factorial

MOD = 10**9 + 7

def dfs(v, parent, adj, size):
    cnt = 1
    for u in adj[v]:
        if u == parent:
            continue
        cnt += dfs(u, v, adj, size)
    size[v] = cnt
    return cnt

def dp(v, parent, adj, size, fact, inv_fact):
    result = fact[size[v]-1]
    for u in adj[v]:
        if u == parent:
            continue
        result *= inv_fact[size[u]]
        result %= MOD
        result *= dp(u, v, adj, size, fact, inv_fact)
        result %= MOD
    return result

def solve(N, edges):
    adj = defaultdict(list)
    for a, b in edges:
        adj[a].append(b)
        adj[b].append(a)
    
    size = [0] * (N + 1)
    dfs(1, 0, adj, size)
    
    fact = [0] * (N + 1)
    inv_fact = [0] * (N + 1)
    fact[0] = 1
    for i in range(1, N + 1):
        fact[i] = (fact[i - 1] * i) % MOD
    inv_fact[N] = pow(fact[N], MOD - 2, MOD)
    for i in range(N - 1, -1, -1):
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD
    
    result = []
    for k in range(1, N + 1):
        result.append(dp(k, 0, adj, size, fact, inv_fact))
    
    return result


# Read input
N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Solve problem
result = solve(N, edges)

# Print output
for res in result:
    print(res)