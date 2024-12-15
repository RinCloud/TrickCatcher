from collections import deque

n = int(input())
adj_list = [[] for _ in range(n + 1)]

for _ in range(n - 1):
    a, b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)

def bfs(start, target):
    queue = deque([(start, 0)])
    visited = [False] * (n + 1)

    while queue:
        node, distance = queue.popleft()
        visited[node] = True

        if node == target:
            return distance

        for neighbor in adj_list[node]:
            if not visited[neighbor]:
                queue.append((neighbor, distance + 1))

fennec_distance = bfs(1, n)
snuke_distance = bfs(n, 1)

if fennec_distance <= snuke_distance:
    print("Fennec")
else:
    print("Snuke")