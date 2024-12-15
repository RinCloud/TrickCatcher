n, x, d = map(int, input().split())
m = [0] * n
p = [0] * n
for i in range(n):
    m[i], p[i] = map(int, input().split())

c = [0] * n
for i in range(n):
    c[i] = min(x // m[i], 1)

for i in range(1, n):
    for j in range(1, i):
        if p[i] == j:
            c[i] = max(c[i], c[j] + d)

print(sum(c))