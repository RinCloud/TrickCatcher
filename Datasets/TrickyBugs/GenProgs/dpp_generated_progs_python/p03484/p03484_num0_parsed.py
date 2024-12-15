from collections import deque

def bfs(adj, start):
    queue = deque()
    visited = [False] * (len(adj) + 1)
    level = [-1] * (len(adj) + 1)

    queue.append(start)
    visited[start] = True
    level[start] = 0

    while queue:
        node = queue.popleft()
        for neighbor in adj[node]:
            if not visited[neighbor]:
                queue.append(neighbor)
                visited[neighbor] = True
                level[neighbor] = level[node] + 1

    return level

def solve():
    N = int(input())
    adj = [[] for _ in range(N + 1)]
    for _ in range(N - 1):
        a, b = map(int, input().split())
        adj[a].append(b)
        adj[b].append(a)

    levels = bfs(adj, 1)
    max_level = max(levels)

    a = 0
    b = 0
    for level in levels:
        if level == max_level:
            a += 1
        elif level == max_level - 1:
            b += 1

    print(a, b)

solve()