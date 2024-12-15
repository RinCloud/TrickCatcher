from collections import defaultdict

def calculate_uninity(adj_list, node, parent):
    children_uninity = []
    for child in adj_list[node]:
        if child != parent:
            children_uninity.append(calculate_uninity(adj_list, child, node))
    if not children_uninity:
        return 0
    else:
        return max(children_uninity) + 1

def minimum_k(N, edges):
    adj_list = defaultdict(list)
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)
    return calculate_uninity(adj_list, 1, -1)

N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

result = minimum_k(N, edges)
print(result)