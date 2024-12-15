n, x = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

cnt = 0
for i in range(n):
    if x >= a[i]:
        cnt += 1
        x -= a[i]
    else:
        break

if x > 0:
    cnt = max(0, cnt-1)

print(cnt)