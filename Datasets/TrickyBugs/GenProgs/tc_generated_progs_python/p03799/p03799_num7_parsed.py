n, m = map(int, input().split())
if n <= m:
    print((n + (m - n) // 2))
else:
    print(m // 2)