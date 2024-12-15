N, M = map(int, input().split())
H = list(map(int, input().split()))

graph = [[] for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)

good_obs = 0
for i in range(1, N+1):
    is_good = True
    for j in graph[i]:
        if H[i-1] <= H[j-1]:
            is_good = False
            break
    if is_good:
        good_obs += 1

print(good_obs)