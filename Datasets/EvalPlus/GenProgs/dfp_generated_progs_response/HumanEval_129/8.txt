def minPath(grid, k):
    N = len(grid)
    cell_map = {}
    for i in range(N):
        for j in range(N):
            cell_map[grid[i][j]] = (i, j)
    
    def neighbors(i, j):
        result = []
        if i > 0:
            result.append((i-1, j))
        if i < N-1:
            result.append((i+1, j))
        if j > 0:
            result.append((i, j-1))
        if j < N-1:
            result.append((i, j+1))
        return result
    
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        min_path = None
        for ni, nj in neighbors(i, j):
            nxtpath = path + [grid[ni][nj]]
            if nxtpath not in visited:
                visited.add(nxtpath)
                res = dfs(ni, nj, nxtpath, visited)
                visited.remove(nxtpath)
                if res:
                    if not min_path or res < min_path:
                        min_path = res
        return min_path
    
    start = min(cell_map.keys())
    i, j = cell_map[start]
    return dfs(i, j, [start], set([start]))