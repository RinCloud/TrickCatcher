h, w = map(int, input().split())
s = float('inf')
for i in range(1, h):
    a1 = min(i * w, w * ((h - i)//2))
    b1 = max(i * w, w * (h - i - (h - i)//2))
    d1 = b1 - a1
    a2 = min(i * w, (h - i) * (w // 2))
    b2 = max(i * w, (h - i) * (w - w // 2))
    d2 = b2 - a1
    s = min(s, d1, d2)
for j in range(1, w):
    a1 = min(j * h, h * ((w - j)//2))
    b1 = max(j * h, h * (w - j - (w - j)//2))
    d1 = b1 - a1
    a2 = min(j * h, (w - j) * (h // 2))
    b2 = max(j * h, (w - j) * (h - h // 2))
    d2 = b2 - a2
    s = min(s, d1, d2)
print(s)