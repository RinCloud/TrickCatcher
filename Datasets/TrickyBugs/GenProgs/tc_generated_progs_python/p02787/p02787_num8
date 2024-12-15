h,n=map(int,input().split())
a=[list(map(int,input().split())) for i in range(n)]
inf=h+2*n
dp=[float('inf')]*(inf+1)
dp[0]=0
for i in range(1,inf+1):
    for j in range(n):
        if i-a[j][0]>=0:
            dp[i]=min(dp[i],dp[i-a[j][0]]+a[j][1])
print(min(dp[h:]))