**Repaired code**:


from copy import deepcopy
N = int(input())
a0 = list(map(int, input().split()))
a = deepcopy(a0)

for i in range(N, 0, -1):
    if a[i - 1] < 0:
        tmp = 0
        b = []
        for j in range(1, 101):
            if i * j - 1 >= N:
                break
            tmp += a[i * j - 1]
            b.append(i * j - 1)
        if tmp < 0:
            for j in b:
                a[j] = 0

for k1 in range(N, 0, -1):
    for k2 in range(k1-1, 0, -1):
        b = deepcopy(a)
        for j in range(1, 101):
            if k1*j-1 >= N:
                break
            b[k1*j-1] = 0
        for j in range(1, 101):
            if k2*j-1 >= N:
                break
            b[k2*j-1] = 0
        for i in range(N, 0, -1):
            if b[i - 1] < 0:
                tmp = 0
                c = []
                for j in range(1, 101):
                    if i * j - 1 >= N:
                        break
                    tmp += b[i * j - 1]
                    c.append(i * j - 1)
                if tmp < 0:
                    for j in c:
                        b[j] = 0

        for i in range(N, 0, -1):
            if a[i - 1] < 0:
                tmp = 0
                c = []
                for j in range(1, 101):
                    if i * j - 1 >= N:
                        break
                    tmp += a[i * j - 1]
                    c.append(i * j - 1)
                if tmp < 0:
                    for j in c:
                        a[j] = 0

        if sum(b) > sum(a):
            a = b

print(sum(a))