from itertools import permutations, combinations

def min_budget(N, M, edges):
    # Create a graph represented as adjacency list
    graph = [[] for _ in range(N)]
    for a, b, c in edges:
        graph[a-1].append((b-1, c))
        graph[b-1].append((a-1, c))

    # Find all permutations of vertices between 1 and N-2
    perms = permutations(range(1, N-1))

    ans = float('inf')
    for perm in perms:
        path = [0] + list(perm) + [N-1]
        cost = 0
        for i in range(len(path)-1):
            u, v = path[i], path[i+1]
            for nxt, c in graph[u]:
                if nxt == v:
                    cost += c
                    break
        ans = min(ans, cost)

    return ans

# Read input
N, M = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(M)]

# Calculate and print the minimum budget
print(min_budget(N, M, edges))