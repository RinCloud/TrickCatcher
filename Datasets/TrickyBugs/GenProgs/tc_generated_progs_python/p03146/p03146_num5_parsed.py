s = int(input())
cnt = 0
if s == 3:
  cnt += 4          #Changing 5 to 4 since 5th step is covered in last line
while(s > 4):
  cnt += 1
  if s % 2 == 0:
    s //= 2
  else:
    s = s * 3 + 1
print(cnt + 4)