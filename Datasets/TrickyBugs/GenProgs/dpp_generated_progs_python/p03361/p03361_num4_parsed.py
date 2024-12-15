# Program:

def draw_picture(H, W, s):
    for i in range(H):
        for j in range(W):
            if s[i][j] == "#":
                if i > 0 and s[i-1][j] == "#" or \
                    j > 0 and s[i][j-1] == "#" or \
                    i < H-1 and s[i+1][j] == "#" or \
                    j < W-1 and s[i][j+1] == "#":
                    continue
                else:
                    return "No"
    return "Yes"

H, W = map(int, input().split())
s = []
for _ in range(H):
    s.append(list(input()))
    
print(draw_picture(H, W, s))