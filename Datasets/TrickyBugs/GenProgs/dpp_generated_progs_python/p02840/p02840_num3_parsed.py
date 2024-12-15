# Program:

N, X, D = map(int, input().split())

if D == 0:
    if X == 0:
        print(1)
    else:
        print(N + 1)
else:
    count = 0
    vals = {}
    for i in range(N + 1):
        a = i * (2 * X + (N - i) * D) // 2
        vals[a] = True
        if i > 0:
            b = (i - 1) * (2 * X + (N - i + 1) * D) // 2
            vals[b] = True
    for i in range(N + 1):
        for j in range(i-1):
            cur = X + (i + 1 + i - j - 2) * D
            diff = (i + j) * (i - j - 1) // 2 * D
            for k in range(10):
                v1 = cur * k + diff
                v2 = cur * (k + 1) + diff - D
                for l in range(N + 1):
                    val = v1 + (v2 - v1) * l
                    if val in vals:
                        count += 1
    print(count)