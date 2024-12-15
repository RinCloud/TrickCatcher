# IMPLEMENTATION

def dfs(i, j):
    if not (0 <= i < H and 0 <= j < W):
        return
    if s[i][j] == '#':
        if not visited[i][j]:
            visited[i][j] = True
            dfs(i+1, j)
            dfs(i-1, j)
            dfs(i, j+1)
            dfs(i, j-1)


H, W = map(int, input().split())

s = []
for _ in range(H):
    s.append(input())

visited = [[False] * W for _ in range(H)]

dfs(0, 0)

for i in range(H):
    for j in range(W):
        if s[i][j] == '#' and not visited[i][j]:
            print('No')
            exit()

print('Yes')