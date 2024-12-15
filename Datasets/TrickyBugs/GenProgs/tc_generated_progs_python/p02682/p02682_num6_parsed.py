a, b, c, k = map(int, input().split())

if k <= a:
    print(k)
else:
    print(a - (k - a - b))
