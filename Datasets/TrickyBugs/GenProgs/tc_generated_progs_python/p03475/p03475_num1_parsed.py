n, *t = map(int, open(0).read().split())

for i in range(n):
    a = 0
    for c, s, f in zip(t[3 * i::3], t[3 * i + 1::3], t[3 * i + 2::3]):
        if a <= s: # train has not arrived, have to wait
            a = s + c
        else:
            a += ((a - s + f - 1) // f) * f + c
    print(a)