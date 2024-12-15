N = int(input())
b = list(map(int, input().split()))

if b.count(1) == 0:
    print(-1)
else:
    a = []
    for i in range(N):
        j = min(i+1, b[i])
        a.insert(j, i+1)
        if a != b[:i+1]:
            print(-1)
            break
        else:
            print(j)