def find_smallest_initial_amount(N, M, vertex_values, edges):
    adj_list = [[] for _ in range(N)]
    for u, v in edges:
        u -= 1
        v -= 1
        adj_list[u].append(v)
        adj_list[v].append(u)
    
    def dfs(v, parent):
        min_initial_amount = vertex_values[v][0]
        for u in adj_list[v]:
            if u != parent:
                min_initial_amount = max(min_initial_amount, dfs(u, v))
        return min_initial_amount - vertex_values[v][1]
    
    min_amount = float('inf')
    for i in range(N):
        min_amount = min(min_amount, dfs(i, -1))
    
    return min_amount

# Example usage:    
N, M = map(int, input().split())
vertex_values = []
for i in range(N):
    A, B = map(int, input().split())
    vertex_values.append((A, B))
edges = []
for i in range(M):
    U, V = map(int, input().split())
    edges.append((U, V))

print(find_smallest_initial_amount(N, M, vertex_values, edges))