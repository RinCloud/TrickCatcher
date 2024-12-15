from heapq import heappop, heappush
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    heap = []
    for i in range(n):
        for j in range(m):
            heappush(heap, (grid[i][j], [grid[i][j]]))
    
    while heap:
        curr_val, path = heappop(heap)
        if len(path) == k:
            return path
        i = j = 0
        for i, row in enumerate(grid):
            if curr_val in row:
                j = row.index(curr_val)
                break
        if i > 0:
            if path[-1] != grid[i-1][j]:
                heappush(heap, (grid[i-1][j], path + [grid[i-1][j]]))
        if i < n-1:
            if path[-1] != grid[i+1][j]:
                heappush(heap, (grid[i+1][j], path + [grid[i+1][j]]))
        if j > 0:
            if path[-1] != grid[i][j-1]:
                heappush(heap, (grid[i][j-1], path + [grid[i][j-1]]))
        if j < m-1:
            if path[-1] != grid[i][j+1]:
                heappush(heap, (grid[i][j+1], path + [grid[i][j+1]]))
    return []