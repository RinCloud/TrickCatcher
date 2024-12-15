def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = []
    
    def dfs(i, j, cnt):
        visited[i][j] = True
        path.append(grid[i][j])
        
        if cnt == k:
            return True
        
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        next_candidates = []
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < m and not visited[x][y]:
                next_candidates.append((grid[x][y], x, y))
        
        next_candidates.sort()
        for _, x, y in next_candidates:
            if dfs(x, y, cnt + 1):
                return True
            
        visited[i][j] = False
        path.pop()
        return False
    
    for i in range(n):
        for j in range(m):
            if dfs(i, j, 1):
                return path