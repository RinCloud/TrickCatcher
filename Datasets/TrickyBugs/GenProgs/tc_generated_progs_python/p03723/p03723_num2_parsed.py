a, b, c = map(int, input().split())
e = (a - b) | (b - c)
if e == 0:
    print(-1)
else:
    print(len(bin(e & -e)) - 3)
