n, m = map(int, input().split())
p = list(map(int, input().split()))
pairs = [list(map(int, input().split())) for _ in range(m)]

count = 0
for i in range(n):
    if p[i] == i+1:
        count += 1

for x, y in pairs:
    if p[x-1] == x and p[y-1] != y:
        count -= 1
    elif p[x-1] != x and p[y-1] == y:
        count -= 1

print(count)