n=int(input())
A=list(map(int,input().split()))
c=n+2
result = 0
for i in range(n):
    if A[i]==1:
        c=2
    elif A[i]==c:
        c+=1
    else:
        result+=1
if result >= n-1:
    print(-1)
else:
    print(result)