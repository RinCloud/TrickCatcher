def minPath(grid, k):
    N = len(grid)
    if k > 2 * (N - 1):
        return None
    
    def dfs(i, j, path):
        nonlocal min_path
        path.append(grid[i][j])
        
        if len(path) == k:
            if min_path is None or min_path > path:
                min_path = path
            return
        
        if i > 0:
            dfs(i-1, j, path.copy())
        if j > 0:
            dfs(i, j-1, path.copy())
        if i < N-1:
            dfs(i+1, j, path.copy())
        if j < N-1:
            dfs(i, j+1, path.copy())
    
    min_path = None
    for i in range(N):
        for j in range(N):
            dfs(i, j, [])
    
    return min_path