N = int(input())
a = list(map(int, input().split()))

if a[0] != 1:
    print(-1)
    exit()

cnt = 0
for i in range(1, N):
    if a[i] != a[i-1]+1:
        cnt += 1

if cnt == 0:
    print(0)
else:
    print(cnt)