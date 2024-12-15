from collections import defaultdict

def max_score(N, M, edges):
    # Construct the graph
    graph = defaultdict(list)
    for a, b, c in edges:
        graph[a].append((b, c))
    
    # Initialize the scores as -infinity
    scores = [-float('inf')] * (N + 1)
    scores[1] = 0
    
    # Topological sort the graph
    queue = [1]
    while queue:
        node = queue.pop(0)
        for neighbor, weight in graph[node]:
            new_score = scores[node] + weight
            if new_score > scores[neighbor]:
                scores[neighbor] = new_score
                queue.append(neighbor)
    
    # Check if there is a negative cycle
    queue = [1]
    while queue:
        node = queue.pop(0)
        for neighbor, weight in graph[node]:
            new_score = scores[node] + weight
            if new_score > scores[neighbor]:
                scores[neighbor] = float('inf')
                queue.append(neighbor)
    
    if scores[N] == float('inf'):
        return 'inf'
    else:
        return scores[N]


# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))
    
# Calculate and print the maximum score
print(max_score(N, M, edges))