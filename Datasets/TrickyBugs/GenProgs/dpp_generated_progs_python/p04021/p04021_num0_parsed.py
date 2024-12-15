n = int(input())
a = [int(input()) for _ in range(n)]

cnt = 0
for i in range(n-1):
  if a[i] > a[i+1]:
    cnt += 1
if cnt % 2 == 1:
  print(cnt//2 + 1)
else:
  print(cnt//2)