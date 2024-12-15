from collections import defaultdict

MOD = 10**9 + 7

def dfs(v, parent, adjacency_list, dist, num_children):
    num_children[v] = 1
    for u in adjacency_list[v]:
        if u != parent:
            dist[u] = dist[v] + 1
            dfs(u, v, adjacency_list, dist, num_children)
            num_children[v] += num_children[u]

def solve(N, edges):
    adjacency_list = defaultdict(list)
    for x, y in edges:
        adjacency_list[x].append(y)
        adjacency_list[y].append(x)

    dist = [0] * (N + 1)
    num_children = [0] * (N + 1)
    dfs(1, 0, adjacency_list, dist, num_children)

    total_dist = 0
    for v in range(1, N + 1):
        total_dist += dist[v]

    answer = 1
    for v in range(2, N + 1):
        answer *= num_children[v]
        answer %= MOD

    answer *= total_dist
    answer %= MOD

    return answer

N = int(input())
edges = []
for _ in range(N - 1):
    x, y = map(int, input().split())
    edges.append((x, y))

result = solve(N, edges)
print(result)