from heapq import *
n = int(input())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
b = list(map(int, input().split()))
q = int(input())
for _ in range(q):
    c, d = map(int, input().split())
    e = []
    for i in range(n):
        e.append((b[i] - d, i))
    f = []
    for i in range(n):
        f.append((-a[i][0], i))
        f.append((-a[i][1], i))
    heapify(f)
    used = [False] * (2 * n)
    ans = 0
    cur = 0
    for i in range(n):
        while cur < 2 * n and f[cur][0] >= e[i][0]:
            _, j = f[cur]
            cur += 1
        if cur < 2 * n and used[j]:
            continue
        if b[j] >= e[i][0]:
            ans += 1
            used[j] = True
    print(ans)