# Program:

import sys
from itertools import combinations

def remove_edges(N, M, edges):
    # Generate all possible subsets of edges
    subsets = []
    for r in range(1, M+1):
        subsets += combinations(range(M), r)
    
    min_budget = sys.maxsize
    
    for subset in subsets:
        # Create a list of vertices with removed edges
        graph = [[] for _ in range(N)]
        for i in range(M):
            if i in subset:
                continue
            u, v, c = edges[i]
            graph[u-1].append((v-1, c))
            graph[v-1].append((u-1, c))
        
        # Run DFS to check if there is a path from Vertex 1 to Vertex N that does not visit the same vertex more than once
        visited = [False] * N
        stack = [(0, 0)]  # Start from Vertex 1
        while stack:
            node, cost = stack.pop()
            if node == N-1:
                # If reached Vertex N, update min_budget if cost is less than min_budget
                min_budget = min(min_budget, cost)
                break
            if visited[node]:
                continue
            visited[node] = True
            for neighbor, neighbor_cost in graph[node]:
                stack.append((neighbor, cost + neighbor_cost))
    
    return min_budget


# Read input from Standard Input
input_lines = sys.stdin.readlines()
N, M = map(int, input_lines[0].split())
edges = [list(map(int, line.split())) for line in input_lines[1:]]

# Call the function and print the result
print(remove_edges(N, M, edges))