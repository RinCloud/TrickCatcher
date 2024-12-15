# Program
H, W = map(int, input().split())
s = [input() for _ in range(H)]

# check if square1001 can achieve the objective
def can_achieve_objective(H, W, s):
    for i in range(H):
        for j in range(W):
            if s[i][j] == '#':
                if i > 0 and s[i-1][j] == '#':
                    continue
                if i < H-1 and s[i+1][j] == '#':
                    continue
                if j > 0 and s[i][j-1] == '#':
                    continue
                if j < W-1 and s[i][j+1] == '#':
                    continue
                return "No"
    return "Yes"

# print the result
print(can_achieve_objective(H, W, s))