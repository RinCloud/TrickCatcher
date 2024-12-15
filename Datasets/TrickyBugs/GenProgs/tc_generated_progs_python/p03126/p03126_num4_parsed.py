n, m = map(int, input().split())

s = set()
for _ in range(n):
    *b, = map(int, input().split())
    b = b[1:]
    a = set(b)
    if not s:
        s = a
    else:
        s = s & a
print(len(s))