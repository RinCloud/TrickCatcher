'''
PROGRAM:
'''

N, X, D = map(int, input().split())
m = [0] * N
p = [0] * N
for i in range(N):
    m[i], p[i] = map(int, input().split())

c = [0] * N
d = [0] * N
for i in range(N):
    c[i] = i
    d[i] = m[i]

ans = 0
for _ in range(N):
    num = ((X - sum(d)) // D + 1) if D != 0 else 0
    num = min(num, N - 1)
    ans += num
    X -= num * D
    for i in range(num):
        idx = c.pop()
        X += d[idx]
        d[p[idx]] -= d[idx]

print(ans)