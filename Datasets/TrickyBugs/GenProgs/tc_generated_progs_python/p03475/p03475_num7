```python
n,*t=map(int,open(0).read().split())
for i in range(n):
 a=t[3*i+1]
 for c,s,f in zip(t[3*i:][::3],t[3*i+1:][::3],t[3*i+2:][::3]):
   if a < s:
     a = s
   elif a % f != 0:
     a = (a//f + 1) * f
   a += c
 print (a)