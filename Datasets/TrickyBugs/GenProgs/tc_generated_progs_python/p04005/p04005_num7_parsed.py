l = list(map(int, input().split()))
l.sort()
if l[2] % 2 != 0:
    print(l[0]*l[1])
else:
    print(0)
