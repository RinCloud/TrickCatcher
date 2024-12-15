N, M, S = map(int, input().split())
cities = [[] for _ in range(N+1)]
for _ in range(M):
    U, V, A, B = map(int, input().split())
    cities[U].append((V, A, B))
    cities[V].append((U, A, B))

exchanges = []
for _ in range(N):
    C, D = map(int, input().split())
    exchanges.append((C, D))

INF = float('inf')
dist = [[INF] * (S+1) for _ in range(N+1)]
dist[1][min(S, exchanges[0][1])] = 0

for s in range(S+1):
    for u in range(1, N+1):
        for v, A, B in cities[u]:
            if s >= A and dist[v][s-A] > dist[u][s] + B:
                dist[v][s-A] = dist[u][s] + B

for t in range(2, N+1):
    min_time = INF
    for s in range(S+1):
        min_time = min(min_time, dist[t][s])
    print(min_time)