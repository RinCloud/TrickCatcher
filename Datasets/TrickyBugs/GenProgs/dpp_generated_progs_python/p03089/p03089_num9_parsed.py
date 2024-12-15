n = int(input())
b = list(map(int, input().split()))

a = []
for i in range(n-1, -1, -1):
    if b[i] == i+1:
        a.insert(0, b[i])
    elif len(a) > 0 and a[0] == i+1:
        a.insert(0, b[i])
    else:
        print(-1)
        exit()

for num in a:
    print(num)