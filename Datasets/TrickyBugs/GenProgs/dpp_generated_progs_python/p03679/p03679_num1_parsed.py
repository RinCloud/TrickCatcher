x, a, b = map(int, input().split())

if b - a > x:
    print("dangerous")
elif b - a > 0:
    print("safe")
else:
    print("delicious")