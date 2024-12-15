def is_symmetric_grid(H, W, S):
    for i in range(H//2):
        if S[i] != S[H-1-i]:
            return False
    return True

H, W = map(int, input().split())
S = []
for _ in range(H):
    S.append(input())

if is_symmetric_grid(H, W, S):
    print("YES")
else:
    print("NO")