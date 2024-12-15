s = int(input())
cnt = 0
while(s > 1):
  cnt += 1
  if s % 2 == 0:
    s //= 2
  else:
    s = s * 3 + 1
print(cnt)
