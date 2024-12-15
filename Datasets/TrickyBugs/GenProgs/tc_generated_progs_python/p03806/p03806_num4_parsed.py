N,Ma,Mb = map(int,input().split())
abc = [list(map(int,input().split())) for _ in range(N)]
inf = 10**9
dp = [[inf for i in range(N*10+1)] for i in range(N*10+1)]
dp[0][0] = 0
max_a = 0
max_b = 0
for i in range(N):
    max_a += abc[i][0]
    max_b += abc[i][1]
    for ai in range(abc[i][0],max_a+1)[::-1]:
        for bi in range(abc[i][1],max_b+1)[::-1]:
            dp[ai][bi] = min(dp[ai][bi],dp[ai-abc[i][0]][bi-abc[i][1]]+abc[i][2])
ans = inf
for i in range(1,min(max_a//Ma,max_b//Mb)+1): # Note: fixed the range of iteration by adding 1 in the ending condition
    ans = min(ans,dp[i*Ma][i*Mb])
if ans == inf:
    print(-1)
else:
    print(ans)