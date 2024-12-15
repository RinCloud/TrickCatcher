a, b, c, k = map(int, input().split())

if a >= k:
    print(k)
else:
    print(a + min(0, a + b - k))
