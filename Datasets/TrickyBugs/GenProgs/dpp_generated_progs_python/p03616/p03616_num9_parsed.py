import bisect

X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

sand_A = X
sand_B = 0

lower_positions = []
upper_positions = []
for i in range(K):
    if i % 2 == 0:
        upper_positions.append(r[i])
    else:
        lower_positions.append(r[i])

for _ in range(Q):
    t, a = map(int, input().split())
    if K % 2 == 0:
        sand_A = sand_B + a
    else:
        sand_A = X - sand_B + a

    if t < upper_positions[0]:
        sand_B += min(sand_A, X)
        sand_A -= min(sand_A, X)
    elif t > lower_positions[-1]:
        sand_A += min(sand_B, X)
        sand_B -= min(sand_B, X)
    else:
        if t in upper_positions:
            i = upper_positions.index(t)
            if i % 2 == 0:
                sand_B += min(sand_A, X)
                sand_A -= min(sand_A, X)
            else:
                sand_A += min(sand_B, X)
                sand_B -= min(sand_B, X)
        else:
            i = bisect.bisect(upper_positions, t) - 1
            if i % 2 == 0:
                sand_B += min(sand_A, X)
                sand_A -= min(sand_A, X)
            else:
                sand_A += min(sand_B, X)
                sand_B -= min(sand_B, X)
            j = bisect.bisect(lower_positions, t)
            if j % 2 == 0:
                sand_A += min(sand_B, X)
                sand_B -= min(sand_B, X)
            else:
                sand_B += min(sand_A, X)
                sand_A -= min(sand_A, X)

    print(sand_A)