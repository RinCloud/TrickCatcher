N, M = map(int, input().split())
H = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

good_obs = set(range(1, N+1))

for road in roads:
    a, b = road
    if H[a-1] <= H[b-1]:
        good_obs.discard(a)
    if H[b-1] <= H[a-1]:
        good_obs.discard(b)

print(len(good_obs))