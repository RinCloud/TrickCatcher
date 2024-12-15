import sys

def solve():
    H, W, K = map(int, input().split())
    A = [input() for _ in range(H)]
    
    INF = float('inf')
    dp = [[INF] * W for _ in range(H)]
    
    start = None
    for i in range(H):
        for j in range(W):
            if A[i][j] == 'S':
                start = (i, j)
                break
        if start:
            break
    
    q = [(start[0], start[1], 0)]
    moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    while q:
        x, y, cost = q.pop(0)
        
        if A[x][y] == '#' or dp[x][y] <= cost:
            continue
        
        dp[x][y] = cost
        
        for dx, dy in moves:
            nx = x + dx
            ny = y + dy
            
            if 0 <= nx < H and 0 <= ny < W:
                q.append((nx, ny, cost + 1))
    
    min_casts = INF
    for i in range(H):
        for j in range(W):
            if i == 0 or i == H - 1 or j == 0 or j == W - 1:
                min_casts = min(min_casts, dp[i][j])
    
    num_casts = (min_casts - 1) // K + 1
    print(num_casts)

solve()