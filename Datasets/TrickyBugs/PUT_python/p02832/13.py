n=int(input())
A=list(map(int,input().split()))
c=n+2
for i in range(n):
    if A[i]==1:
        c=2
    elif A[i]==c:
        c+=1
print(n-c+1)