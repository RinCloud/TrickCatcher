from itertools import permutations

def find_minimum_budget(N, M, edges):
    # Create adjacency matrix
    adj_matrix = [[0] * N for _ in range(N)]
    for a, b, c in edges:
        adj_matrix[a-1][b-1] = c
        adj_matrix[b-1][a-1] = c
    
    # Generate all permutations of nodes except the start and end node
    perm = permutations(range(1, N-1))
    
    min_budget = float('inf')
    for p in perm:
        budget = 0
        prev = 0
        for i in p:
            budget += adj_matrix[prev][i]
            prev = i
        budget += adj_matrix[prev][N-1]
        min_budget = min(min_budget, budget)
    
    return min_budget

# Read input from standard input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Call the function and print the result
print(find_minimum_budget(N, M, edges))