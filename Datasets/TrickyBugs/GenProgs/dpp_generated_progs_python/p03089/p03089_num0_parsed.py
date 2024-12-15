N = int(input())
b = list(map(int, input().split()))

a = []
ops = []
for i in range(N):
    for j in range(i, 0, -1):
        if a[j-1] == j:
            a.insert(j, j)
            ops.append(j)
            break
    else:
        ops = -1
        break

if ops == -1:
    print(-1)
else:
    for op in ops:
        print(op)
