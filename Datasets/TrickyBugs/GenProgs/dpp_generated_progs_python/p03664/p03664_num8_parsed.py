from itertools import permutations

def find_min_budget(N, M, edges):
    def dfs(start, end, visited):
        if start == end:
            return True
        visited[start] = True
        for neighbor in graph[start]:
            if not visited[neighbor]:
                if dfs(neighbor, end, visited):
                    return True
        return False

    graph = [[] for _ in range(N)]
    costs = [0] * M
    for i, (a, b, c) in enumerate(edges):
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
        costs[i] = c

    min_budget = float('inf')
    for perm in permutations(range(1, N-1)):
        budget = 0
        removed_edges = []
        visited = [False] * N
        if dfs(0, perm[0], visited):
            for i in range(len(perm)-1):
                if not dfs(perm[i], perm[i+1], visited):
                    budget += costs[perm[i]-1]
                    removed_edges.append(perm[i]-1)
            if dfs(perm[-1], N-1, visited):
                if budget < min_budget:
                    min_budget = budget

    return min_budget

# Reading input
N, M = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(M)]

# Finding minimum budget
min_budget = find_min_budget(N, M, edges)

# Printing output
print(min_budget)