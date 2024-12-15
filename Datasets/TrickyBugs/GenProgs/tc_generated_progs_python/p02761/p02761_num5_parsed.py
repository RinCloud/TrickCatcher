n, m = map(int, input().split())
f = sorted([list(map(int, input().split())) for i in range(m)])

if m == 0:
    print(10 ** (n - 1))
else:
    for i in range(10 ** (n - 1), 10 ** n):
        d = str(i)
        for b, v in f:
            if int(d[b - 1]) != v:
                break
        else:
            print(i)
            exit()

    print(-1)
