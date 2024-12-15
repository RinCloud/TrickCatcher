n,*t=map(int,open(0).read().split())
for i in range(n):
 a=0
 for c,s,f in zip(t[3*i::3],t[3*i+1::3],t[3*i+2::3]):
  a=max(s,a%f)*f
  a=a-s
  if a<=0:
    a=0
  a=a+c
 print(a)