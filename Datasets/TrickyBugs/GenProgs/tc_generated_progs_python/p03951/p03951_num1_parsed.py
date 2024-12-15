N=int(input())
s=input()
t=input()

a=0
b=0

for i in range(N):
    if s[i]==t[a]:
        a+=1
        b+=1
    else:
        b=0

print(len(s)+len(t)-b)