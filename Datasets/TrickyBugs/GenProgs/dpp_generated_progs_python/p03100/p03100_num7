from collections import defaultdict

# Function to find a path with given length modulo MOD
def dfs(graph, s, t, cur_length, target_length, mod, visited):
    if cur_length % mod == target_length % mod:
        return True
    if visited[s]:
        return False
    visited[s] = True
    for v, edge_length in graph[s]:
        if dfs(graph, v, t, (cur_length * 2 + edge_length) % mod, target_length, mod, visited):
            return True
    return False

# Main function to process queries
def process_queries(graph, queries, mod):
    for s, t, r in queries:
        visited = [False] * (len(graph) + 1)
        if dfs(graph, s, t, 0, r, mod, visited):
            print("YES")
        else:
            print("NO")

# Read input
N, M, Q, MOD = map(int, input().split())
graph = defaultdict(list)
for _ in range(M):
    A, B, C = map(int, input().split())
    graph[A].append((B, C))
    graph[B].append((A, C))
queries = []
for _ in range(Q):
    S, T, R = map(int, input().split())
    queries.append((S, T, R))

# Process queries
process_queries(graph, queries, MOD)