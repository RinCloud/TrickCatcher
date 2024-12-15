import sys
input=sys.stdin.readline
H, W = map(int, input().split())
C = [list(map(int, input().split())) for _ in range(10)]
for k in range(10):
    for i in range(10):
        for j in range(10):
            C[i][j] = min(C[i][j], C[i][k] + C[k][j])
ans = 0
for _ in range(H):
    A = list(map(int, input().split()))
    for a in A:
        if a != -1:
            ans += C[a][1]
print(ans)