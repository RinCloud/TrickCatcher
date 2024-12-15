from collections import defaultdict

def dfs(vertex, target, path_sum, path_length, graph, mod):
    if vertex == target:
        return path_sum % mod == 0
    
    for neighbor, weight in graph[vertex]:
        if dfs(neighbor, target, (path_sum + (1 << path_length) * weight) % mod, path_length + 1, graph, mod):
            return True
    
    return False

def solve(N, M, Q, mod, edges, queries):
    graph = defaultdict(list)
    for a, b, c in edges:
        graph[a].append((b, c))
        graph[b].append((a, c))

    result = []
    for s, t, r in queries:
        result.append("YES" if dfs(s, t, r % mod, 0, graph, mod) else "NO")

    return result

N, M, Q, mod = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]
queries = [tuple(map(int, input().split())) for _ in range(Q)]

output = solve(N, M, Q, mod, edges, queries)
for res in output:
    print(res)