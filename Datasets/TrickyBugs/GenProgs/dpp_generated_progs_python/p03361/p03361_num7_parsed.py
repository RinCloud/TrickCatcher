# Program

def can_achieve_objective(H, W, s):
    for i in range(H):
        for j in range(W):
            if s[i][j] == '#':
                if i > 0 and s[i-1][j] == '#':
                    continue
                elif i < H-1 and s[i+1][j] == '#':
                    continue
                elif j > 0 and s[i][j-1] == '#':
                    continue
                elif j < W-1 and s[i][j+1] == '#':
                    continue
                else:
                    return 'No'
    return 'Yes'

H, W = map(int, input().split())
s = [input() for _ in range(H)]

result = can_achieve_objective(H, W, s)
print(result)