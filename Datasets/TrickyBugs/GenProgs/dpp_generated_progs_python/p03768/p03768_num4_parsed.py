from collections import deque

N, M = map(int, input().split())
adj = [[] for _ in range(N+1)]

for _ in range(M):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

Q = int(input())
vertices = [0] * (N+1)

for _ in range(Q):
    v, d, c = map(int, input().split())
    queue = deque([(v, 0)])
    visited = [False] * (N+1)

    while queue:
        u, dist = queue.popleft()

        if dist > d:
            break

        if not visited[u]:
            vertices[u] = c
            visited[u] = True

            for neighbor in adj[u]:
                if not visited[neighbor]:
                    queue.append((neighbor, dist+1))

for i in range(1, N+1):
    print(vertices[i])