n, m = map(int, input().split())
f = sorted([list(map(int, input().split())) for i in range(m)])

if n == 1:
    if m == 1:
        print(f[0][1])
    elif m >= 2:
        print(-1)
    else:
        print(0)
else:
    for i in range(10**(n-1), 10**n):
        d = str(i)
        for b, v in f:
            if int(d[b-1]) != v:
                break
        else:
            print(i)
            exit()
    else:
        print(-1)
