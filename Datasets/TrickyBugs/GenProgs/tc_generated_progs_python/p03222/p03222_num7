**REPAIRED CODE**:

import sys

H,W,K=map(int,input().split())
if W==1:
    print(1)
    sys.exit()
elif W==2:
    print(pow(2,H-1,1000000007))
    sys.exit()

dic=[1,2,3,5,8,13,21,34,55,1]

a=[[0]*W for i in range(H+1)]
a[0][0]=1

for i in range(1,H+1):
    a[i][0] = (a[i-1][0]*dic[W-2]%1000000007 + a[i-1][1]*dic[W-3]%1000000007) % 1000000007
    for j in range(1,W-1):
        a[i][j]=(a[i-1][j-1]*dic[j-2]*dic[W-j-2] % 1000000007 + a[i-1][j]*dic[j-1]*dic[W-j-2] % 1000000007 + a[i-1][j+1]*dic[j-1]*dic[W-j-3] % 1000000007) % 1000000007
    a[i][W-1] = (a[i-1][W-1]*dic[W-2] % 1000000007 + a[i-1][W-2]*dic[W-3] % 1000000007) % 1000000007


print(a[H][K-1])