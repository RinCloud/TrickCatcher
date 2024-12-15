a, b, c, d = map(int, input().split())
distAB = abs(a - b)
distBC = abs(b - c)
distAC = abs(a - c)

if distAB <= d and distBC <= d:
    print('Yes')
elif distAC <= d:
    print('Yes')
else:
    print('No')
