from collections import defaultdict

MOD = 10**9 + 7

def dfs(vertex, parent, adj, subtree_size):
    subtree_size[vertex] = 1
    for neighbor in adj[vertex]:
        if neighbor == parent:
            continue
        dfs(neighbor, vertex, adj, subtree_size)
        subtree_size[vertex] += subtree_size[neighbor]

def long_travels(n, edges):
    adj = defaultdict(list)
    for x, y in edges:
        adj[x].append(y)
        adj[y].append(x)

    subtree_size = [0] * (n + 1)
    dfs(1, 0, adj, subtree_size)

    answer = 0
    for vertex in adj[1]:
        answer += subtree_size[vertex] * (n - subtree_size[vertex])
        answer %= MOD
    answer += n
    answer %= MOD

    return answer

n = int(input())
edges = []
for _ in range(n-1):
    x, y = map(int, input().split())
    edges.append((x, y))

result = long_travels(n, edges)
print(result)