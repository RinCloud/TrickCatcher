N=int(input())
s=input()
t=input()

a=0
b=0

for i in range(N):
    if s[i]==t[a]:
        a+=1
        b+=1

print(len(s[0:N-b])+len(t))