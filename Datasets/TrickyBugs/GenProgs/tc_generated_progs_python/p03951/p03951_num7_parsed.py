N=int(input())
s=input()
t=input()

a=0
b=0

for i in range(N):
    if s[i]!=t[a]:
        break
    a+=1
    b+=1

print(N*2-b)