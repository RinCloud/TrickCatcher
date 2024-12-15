import math

N, X, D = map(int, input().split())

if D == 0:
    if X == 0:
        print(1)
    else:
        print(N + 1)
else:
    cnt = {}
    for i in range(N + 1):
        a = (i * (2 * X + (i - 1) * D)) // 2
        b = ((N - i) * (2 * X + (N - i - 1) * D)) // 2
        diff = a - b
        if diff not in cnt:
            cnt[diff] = 0
        cnt[diff] += 1

    result = 0
    for val in cnt.values():
        result += (val * (val - 1)) // 2

    print(result)