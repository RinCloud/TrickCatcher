from collections import defaultdict

def solve(H, W, N, obstacles):
    track = set()
    for x, y in obstacles:
        for i in range(max(1, x-2), min(H+1, x+2)):
            for j in range(max(1, y-2), min(W+1, y+2)):
                track.add((i, j))
    
    dp = defaultdict(int)
    for i in range(1, H+1):
        for j in range(1, W+1):
            if (i, j) not in track:
                dp[(i, j)] = max(dp[(i-1, j)], dp[(i, j-1)]) + 1

    return dp[(H, W)]

H, W, N = map(int, input().split())

obstacles = []
for _ in range(N):
    x, y = map(int, input().split())
    obstacles.append((x, y))

print(solve(H, W, N, obstacles))