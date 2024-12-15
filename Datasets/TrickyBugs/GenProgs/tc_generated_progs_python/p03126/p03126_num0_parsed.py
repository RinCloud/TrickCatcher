n, m = map(int, input().split())

s = set()
for _ in range(n):
    b = list(map(int, input().split()))[1:]
    a = set(b)
    if not s:
        s = a
    else:
        s &= a
print(len(s))