N, M = map(int, input().split())
H = list(map(int, input().split()))

roads = [[] for _ in range(N)]
for _ in range(M):
    A, B = map(int, input().split())
    roads[A-1].append(B-1)
    roads[B-1].append(A-1)

good_count = 0
for i in range(N):
    is_good = True
    for j in roads[i]:
        if H[i] <= H[j]:
            is_good = False
            break
    if is_good:
        good_count += 1

print(good_count)