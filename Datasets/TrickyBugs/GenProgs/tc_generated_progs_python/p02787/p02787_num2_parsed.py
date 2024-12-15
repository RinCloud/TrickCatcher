h,n=map(int,input().split())
a=[list(map(int,input().split())) for i in range(n)]
inf=h+1
dp=[float('inf')]*(inf)
dp[0]=0
for i in range(inf):
    for j in range(n):
        if i-a[j][0]>=0:
            dp[i]=min(dp[i],dp[i-a[j][0]]+a[j][1])
print(dp[h])