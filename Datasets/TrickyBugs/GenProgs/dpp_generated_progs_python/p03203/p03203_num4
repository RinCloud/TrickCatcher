from sys import stdin

def solve(H, W, N, obstacles):
    x, y = 1, 1
    actions = 0

    for i in range(N):
        dx = obstacles[i][0] - x
        dy = obstacles[i][1] - y

        if dx*dy > 0:
            actions += min(abs(dx), abs(dy))

        x, y = obstacles[i][0], obstacles[i][1]

    dx = H - x
    dy = W - y

    if dx*dy > 0:
        actions += min(abs(dx), abs(dy))

    return actions

H, W, N = map(int, stdin.readline().split())
obstacles = [list(map(int, stdin.readline().split())) for _ in range(N)]

print(solve(H, W, N, obstacles))