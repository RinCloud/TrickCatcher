H, W = map(int, input().split())
S = [input() for _ in range(H)]

def count_lights(S, i, j):
    count = 0
    
    # up
    x = i
    while x >= 0 and S[x][j] != '#':
        count += 1
        x -= 1
    
    # down
    x = i
    while x < H and S[x][j] != '#':
        count += 1
        x += 1
    
    # left
    y = j
    while y >= 0 and S[i][y] != '#':
        count += 1
        y -= 1
    
    # right
    y = j
    while y < W and S[i][y] != '#':
        count += 1
        y += 1
    
    return count

max_count = 0
for i in range(H):
    for j in range(W):
        if S[i][j] == '.':
            max_count = max(max_count, count_lights(S, i, j))

print(max_count)