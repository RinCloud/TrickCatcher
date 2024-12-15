# Helper functions
def is_valid(i, j, H, W):
    return 0 <= i < H and 0 <= j < W

def bfs(S, T, H, W, pond):
    queue = [(S[0], S[1], 0)]
    visited = [[False] * W for _ in range(H)]
    visited[S[0]][S[1]] = True

    while queue:
        i, j, count = queue.pop(0)

        if i == T[0] or j == T[1]:
            return count

        for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + di, j + dj

            if is_valid(ni, nj, H, W) and not visited[ni][nj] and pond[ni][nj] == 'o':
                visited[ni][nj] = True
                queue.append((ni, nj, count + 1))

    return -1

# Read input
H, W = map(int, input().split())
pond = [input() for _ in range(H)]

# Find S and T
S = T = None
for i in range(H):
    for j in range(W):
        if pond[i][j] == 'S':
            S = (i, j)
        elif pond[i][j] == 'T':
            T = (i, j)

# Check if T is reachable from S
count = bfs(S, T, H, W, pond)
print(count)