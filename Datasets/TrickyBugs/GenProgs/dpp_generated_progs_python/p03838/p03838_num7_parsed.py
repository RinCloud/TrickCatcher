x, y = map(int, input().split())

if x > y:
    diff = x - y
    if diff % 2 == 1:
        print(diff + 2)
    else:
        print(diff)
else:
    print(y - x + 2)