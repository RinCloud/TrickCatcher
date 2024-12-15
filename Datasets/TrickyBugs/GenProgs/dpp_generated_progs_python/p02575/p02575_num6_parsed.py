# PROGRAM:

H, W = map(int, input().split())
grid = [[0] * (W + 2) for _ in range(H + 2)]

for i in range(H):
    a, b = map(int, input().split())
    for j in range(a, b + 1):
        grid[i + 1][j] = -1

moves = [[float('inf')] * (W + 2) for _ in range(H + 2)]
moves[1][1] = 1

for i in range(1, H + 1):
    for j in range(1, W + 1):
        if grid[i][j] != -1:
            moves[i + 1][j] = min(moves[i + 1][j], moves[i][j] + 1)
            moves[i][j + 1] = min(moves[i][j + 1], moves[i][j] + 1)

if moves[H][W] == float('inf'):
    print(-1)
else:
    print(moves[H][W])