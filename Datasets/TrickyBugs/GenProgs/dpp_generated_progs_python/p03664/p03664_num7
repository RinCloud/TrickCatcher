from itertools import combinations

def minimum_budget(N, M, edges):
    # Create an adjacency matrix to represent the graph
    adj_matrix = [[float('inf')] * N for _ in range(N)]
    for a, b, c in edges:
        adj_matrix[a - 1][b - 1] = c
        adj_matrix[b - 1][a - 1] = c

    # Compute all possible paths from Vertex 1 to Vertex N
    all_paths = []
    for r in range(1, N):
        for path in combinations(range(1, N), r):
            all_paths.append([0] + list(path) + [N - 1])

    # Initialize the minimum budget as infinity
    min_budget = float('inf')

    # Find the minimum budget to remove edges for each possible path
    for path in all_paths:
        budget = 0
        for i in range(len(path) - 1):
            budget += adj_matrix[path[i]][path[i + 1]]
        min_budget = min(min_budget, budget)

    return min_budget

# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Compute and print the minimum budget
print(minimum_budget(N, M, edges))