H, W = map(int, input().split())
S = [list(input()) for i in range(H)]

N = [[10**9] * W] * H
l = 0
u = 0
if S[0][0] == '#':
    N[0][0] = 1
else:
    N[0][0] = 0

for i in range(H):
    for j in range(W):
        if i == 0 and j == 0:
            continue
        
        if j > 0 and S[i][j - 1] == '.' and S[i][j] == '#':
            l += 1
        if i > 0 and S[i - 1][j] == '.' and S[i][j] == '#':
            u += 1
        
        if j > 0:
            l = min(l, N[i][j - 1])
        if i > 0:
            u = min(u, N[i - 1][j])

        N[i][j] = min(l, u)

print(N[-1][-1])
