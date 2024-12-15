*s,=map(int,input())
a=0
for i in range(1,len(s)):
    if s[i]==s[i-1]:
        a+=1
        s[i]=1-s[i-1]
print(a)