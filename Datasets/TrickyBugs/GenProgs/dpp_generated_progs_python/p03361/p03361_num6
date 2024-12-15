from queue import Queue

H, W = map(int, input().split())
s = [list(input()) for _ in range(H)]

q = Queue()
visited = [[False] * W for _ in range(H)]

def bfs(start):
    q.put(start)
    visited[start[0]][start[1]] = True

    while not q.empty():
        x, y = q.get()
        if x > 0 and s[x-1][y] == '#' and not visited[x-1][y]:
            q.put((x-1, y))
            visited[x-1][y] = True
        if x < H-1 and s[x+1][y] == '#' and not visited[x+1][y]:
            q.put((x+1, y))
            visited[x+1][y] = True
        if y > 0 and s[x][y-1] == '#' and not visited[x][y-1]:
            q.put((x, y-1))
            visited[x][y-1] = True
        if y < W-1 and s[x][y+1] == '#' and not visited[x][y+1]:
            q.put((x, y+1))
            visited[x][y+1] = True

start = None
for i in range(H):
    for j in range(W):
        if s[i][j] == '#':
            start = (i, j)
            break
    if start is not None:
        break

bfs(start)

for i in range(H):
    for j in range(W):
        if s[i][j] == '#' and not visited[i][j]:
            print("No")
            exit()

print("Yes")