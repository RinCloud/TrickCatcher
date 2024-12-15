def minPath(grid, k):
    def get_neighbors(i, j):
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j + 1))
        return neighbors
    def dfs(i, j, path, visited):
        path.append(grid[i][j])
        visited.add((i, j))
        if len(path) == k:
            return path
        neighbors = get_neighbors(i, j)
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for nei in neighbors:
            if nei not in visited:
                res = dfs(nei[0], nei[1], path, visited)
                if res:
                    return res
        path.pop()
        visited.remove((i, j))
        return None
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [], set())
            if res:
                return res