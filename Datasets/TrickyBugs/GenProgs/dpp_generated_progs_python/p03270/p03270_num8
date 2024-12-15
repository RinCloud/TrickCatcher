import sys
input=sys.stdin.readline
M=998244353
# Using 2-d list to store dp states
dp=[[0]*4002 for i in range(4002)]
def solve(k,N):
    # taking care of base cases
    dp[0][0]=1
    for i in range(2*k-1):
        if(i<k):
            # start loop from k becz till k-1 its answer is same as k
            j=k
        else:
            j=i+1-k+1
        while(j<=k and j<=i):
            dp[i+1][j]=dp[i+1][j-1]+dp[i][j-1]
            j+=1
        while(j<=k+1):
            dp[i+1][j]=dp[i+1][j-1]
            j+=1
        while(j<=2*k):
            dp[i+1][j]=(dp[i+1][j-1]-dp[i][j-k-2]+dp[i][j-k-2]*2*M)%M
            j+=1
        
    # finding answer
    return (dp[2*k-1][k-1]))
# Taking input
k,n=map(int,input().split())
while(k%2==0 and n%2==0):
    k//=2
    n//=2
# getting answer
for i in range(2*k-1):
    print(solve(k,n))