n=int(input())
s=[]
for i in range(n):
    s.append(list(input()))
l=''
for i in range(26):
    t=n+2
    for j in range(n):
        t=min(t,s[j].count(chr(97+i)))
    for j in range(t):
        l=l+chr(97+i)
print(l)
