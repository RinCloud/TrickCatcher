from collections import defaultdict

MOD = 10**9 + 7

def dfs(node, parent, graph, dp, factorial):
    children = graph[node]
    total_ways = factorial[len(children)]
    for child in children:
        if child == parent:
            continue
        dp[child] = (dp[parent] * total_ways * pow(factorial[len(children)-1], MOD-2, MOD)) % MOD
        total_ways -= factorial[len(graph[child])] * pow(factorial[len(graph[child])]-1, MOD-2, MOD) % MOD
        total_ways %= MOD
        dfs(child, node, graph, dp, factorial)

def solve(n, edges):
    graph = defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    dp = [0] * (n+1)
    dp[1] = 1
    
    factorial = [1] * (n+1)
    for i in range(2, n+1):
        factorial[i] = (factorial[i-1] * i) % MOD
    
    dfs(1, 0, graph, dp, factorial)
    
    return "\n".join(str(dp[i]) for i in range(1, n+1))