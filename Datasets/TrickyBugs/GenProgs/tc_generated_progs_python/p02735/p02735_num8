H, W = map(int,input().split())
S = [list(input()) for i in range(H)]

N = [[10**9]*W]*H
l = 0
u = 0
if S[0][0] == '#' :
    N[0][0] = 1
else :
    N[0][0] = 0
for i in range(H) :
    for j in range(W) :
        if i == 0 and j == 0 :
            continue
        #右移動
        r = N[i][j-1]
        #下移動
        d = N[i-1][j]

        if S[i][j-1] == '.' and  S[i][j] == '#' :
            r += 1
        if S[i-1][j] == '.' and  S[i][j] == '#' :
            d += 1
        N[i][j] = min(r,d)

print(N[-1][-1])