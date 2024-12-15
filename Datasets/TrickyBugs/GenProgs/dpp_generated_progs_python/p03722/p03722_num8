from collections import defaultdict

def max_possible_score(N, M, edges):
    # Create a graph using adjacency list representation
    graph = defaultdict(list)
    for a, b, c in edges:
        graph[a].append((b, c))

    # Perform depth-first search to find the maximum score
    stack = [(1, 0)]  # (vertex, score)
    max_score = defaultdict(int)  # keeps track of maximum score at each vertex
    max_score[1] = 0  # score at vertex 1 is 0
    while stack:
        vertex, score = stack.pop()
        if vertex == N:
            return "inf"  # If we reach the final vertex, score can be increased indefinitely
        for neighbor, weight in graph[vertex]:
            updated_score = score + weight
            if updated_score > max_score[neighbor]:
                max_score[neighbor] = updated_score
                stack.append((neighbor, updated_score))
    
    return max_score[N]

# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Compute and print the maximum possible score
print(max_possible_score(N, M, edges))