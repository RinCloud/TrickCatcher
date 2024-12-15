from math import ceil

x, y = map(int, input().split())

if x < 0 and y > 0:
    x = abs(x)
    ans = 1 + ceil(x / (x + y))
elif x > 0 and y < 0:
    y = abs(y)
    ans = 1 + ceil(y / (x + y))
else:
    ans = abs(abs(y) - abs(x)) + (1 if x > y else 0)

print(ans)