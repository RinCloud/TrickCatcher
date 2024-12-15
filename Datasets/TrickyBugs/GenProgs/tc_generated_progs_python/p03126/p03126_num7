n, m = map(int, input().split())

s = set()
for _ in range(n):
    *b, = map(int, input().split())
    a = set(b)
    if s:
        s = s & a
    else:
        s = a
print(len(s))