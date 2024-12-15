import sys
import heapq as hq

stdin = sys.stdin

ns = lambda: stdin.readline().rstrip()
ni = lambda: int(stdin.readline().rstrip())
nm = lambda: map(int, stdin.readline().split())
nl = lambda: list(map(int, stdin.readline().split()))

n, m, s = nm()
N = n * 3001
G = [list() for _ in range(N)]
for _ in range(m):
    u, v, a, b = nm()
    u -= 1; v -= 1
    for j in range(0, N, n):
        if v + j - a * n >= 0:
            G[u + j].append((v + j - a * n, b))
        if u + j - a * n >= 0:
            G[v + j].append((u + j - a * n, b))
for u in range(n):
    c, d = nm()
    for j in range(0, N, n):
        G[u + j].append((min(u + j + c * n, u + N - n), d))

def dijkstra(G, s, t=None):
    dist = [-1]*len(G)
    dist[s] = 0
    q = [(0, s)]
    while q:
        d, v = hq.heappop(q)
        if d > dist[v]: continue
        for x, c in G[v]:
            if dist[x] < 0 or dist[x] > d + c:
                dist[x] = d + c
                hq.heappush(q, (d + c, x))
    if t is None:
        return dist
    else:
        return dist[t]

dist = dijkstra(G, min(s, 3000) * n)
for i in range(1, n):
    print(min(dist[i::n]))