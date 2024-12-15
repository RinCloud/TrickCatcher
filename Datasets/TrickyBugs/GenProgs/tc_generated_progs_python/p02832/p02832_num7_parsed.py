n=int(input())
A=list(map(int,input().split()))
c=n+2
count=0 
i=0
while i<n:
    if A[i]==1:
        c=2
    elif A[i]==c:
        c+=1
        count+=1
    i+=1
if count==(n-1):
    print("0")
else:
    print(-(count-(n-1)))