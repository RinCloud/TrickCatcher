N, M = map(int, input().split())
p = list(map(int, input().split()))
pairs = [tuple(map(int, input().split())) for _ in range(M)]

count = 0
for i in range(1, N+1):
    if p[i-1] == i:
        count += 1

for x, y in pairs:
    x -= 1
    y -= 1
    if p[x] == x+1 and p[y] != y+1:
        count -= 1
    elif p[x] != x+1 and p[y] == y+1:
        count -= 1

    if p[x] != x+1:
        p[p.index(x+1)] = p[y]
    if p[y] != y+1:
        p[p.index(y+1)] = p[x]

print(count)