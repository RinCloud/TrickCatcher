def minPath(grid, k):
    def dfs(i, j, cur, path, visited):
        if cur == k:
            return path
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[i]) or (i, j) in visited:
            return None
        visited.add((i, j))
        res = None
        for ni, nj in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if dfs(ni, nj, cur+1, path + [grid[i][j]], visited):
                if res is None or dfs(ni, nj, cur+1, path + [grid[i][j]], visited) < res:
                    res = dfs(ni, nj, cur+1, path + [grid[i][j]], visited)
        visited.remove((i, j))
        return res
    
    res = None
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if dfs(i, j, 1, [], set()) is not None:
                if res is None or dfs(i, j, 1, [], set()) < res:
                    res = dfs(i, j, 1, [], set())
    return res