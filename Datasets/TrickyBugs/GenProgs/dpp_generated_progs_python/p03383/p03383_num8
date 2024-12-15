def is_symmetric_grid(H, W, S):
    for i in range(H):
        for j in range(W):
            if S[i][j] != S[H - 1 - i][W - 1 - j]:
                return "NO"
    return "YES"

H, W = map(int, input().split())
S = []
for _ in range(H):
    S.append(input())

print(is_symmetric_grid(H, W, S))