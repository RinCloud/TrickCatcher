H, W = map(int, input().split())
S = [input() for _ in range(H)]

def is_symmetric(S):
    for i in range(H//2):
        for j in range(W):
            if S[i][j] != S[H-1-i][W-1-j]:
                return False
    return True

if is_symmetric(S):
    print("YES")
else:
    print("NO")