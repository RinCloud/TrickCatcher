from itertools import combinations

def min_budget(N, M, edges):
    all_paths = []

    for num_edges_to_remove in range(M + 1):
        for combinations_to_remove in combinations(edges, num_edges_to_remove):
            graph = build_graph(N, edges, combinations_to_remove)
            paths = find_all_paths(graph, 1, N)
            all_paths.extend(paths)

    min_budget = float('inf')
    for path in all_paths:
        budget = calculate_budget(edges, path)
        min_budget = min(min_budget, budget)

    return min_budget

def build_graph(N, edges, edges_to_remove):
    graph = {i: [] for i in range(1, N + 1)}
    for edge in edges:
        if edge not in edges_to_remove and (edge[1], edge[0]) not in edges_to_remove:
            graph[edge[0]].append(edge[1])
            graph[edge[1]].append(edge[0])
    return graph

def find_all_paths(graph, start, end, path=[]):
    path = path + [start]
    if start == end:
        return [path]
    if start not in graph:
        return []
    paths = []
    for node in graph[start]:
        if node not in path:
            new_paths = find_all_paths(graph, node, end, path)
            for new_path in new_paths:
                paths.append(new_path)
    return paths

def calculate_budget(edges, path):
    budget = 0
    for edge in edges:
        if (edge[0] in path) and (edge[1] in path):
            budget += edge[2]
    return budget

N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

print(min_budget(N, M, edges))