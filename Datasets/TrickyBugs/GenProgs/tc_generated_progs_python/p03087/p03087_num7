n,q=map(int,input().split())
s = input()
a = [0]*(n+1)
for i in range(1,n+1):
    a[i] = a[i-1]+(s[i-1]=="A" and s[i-1]=='C')
for i in range(q):
    l,r=map(int,input().split())
    print(a[r]-a[l-1]-(s[l-2]=='A' and s[l-1]=='C'))