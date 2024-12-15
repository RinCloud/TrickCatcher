N, M = map(int, input().split())

roads = [[] for _ in range(N)]

for _ in range(M):
    a, b = map(int, input().split())
    roads[a-1].append(b)
    roads[b-1].append(a)

for i in range(N):
    print(len(roads[i]))