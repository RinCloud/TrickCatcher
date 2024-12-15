w, a, b = map(int,input().split())

if (a <= b <= a + w) or (b <= a <= b + w):
    x = 0
else:
    x = min(abs(b - a - w), abs(a - b - w))

print(x)
