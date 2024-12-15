X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())
queries = [list(map(int, input().split())) for _ in range(Q)]

upper_bulb = True
upper_bulb_sand = X
lower_bulb_sand = 0

for t, a in queries:
    if not upper_bulb:
        a = X - a
    for i in range(K):
        if r[i] > t:
            break
        if upper_bulb:
            upper_bulb_sand -= r[i] - r[i-1]
        else:
            lower_bulb_sand += r[i] - r[i-1]
        upper_bulb = not upper_bulb

    if upper_bulb:
        print(upper_bulb_sand - a)
    else:
        print(a - lower_bulb_sand)