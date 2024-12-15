N, L, T = map(int, input().split())
ants = []
for _ in range(N):
    x, w = map(int, input().split())
    ants.append((x, w))

for i in range(N):
    x, w = ants[i]
    time = L - x if w == 1 else x
    pos = (time + T) % L
    print(pos)