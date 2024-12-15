l=list(map(int,input().split()))
l.sort()
if l[2]%2!=0:
  print(l[0]*l[1])
else:
  if l[1]%2!=0:
    print(0)
  else:
    print(min(l[0]*l[1], l[1]*l[2]//2))
