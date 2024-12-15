N, L, T = map(int, input().split())
ants = []
for _ in range(N):
    x, w = map(int, input().split())
    ants.append((x, w))

for i in range(N):
    x, w = ants[i]
    if w == 1:
        ants[i] = ((x + T) % L, w)
    else:
        ants[i] = ((x - T) % L, w)

ants.sort()

for x, _ in ants:
    print(x)