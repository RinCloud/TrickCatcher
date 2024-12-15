N=int(input())
s=input()
t=input()

a=0
b=0

for i in range(N):
    if s[i]==t[a]:
        a+=1
    else:
        a=0
    b+=1

print(N+b)