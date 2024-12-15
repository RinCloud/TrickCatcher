from heapq import heappop, heappush
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    heap = []
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)] # right, down, left, up
    heappush(heap, (grid[0][0], 0, 0, []))
    visited[0][0] = True
    
    while heap:
        val, i, j, path = heappop(heap)
        path.append(val)
        if len(path) == k:
            return path
        for x, y in directions:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < n and 0 <= new_j < n and not visited[new_i][new_j]:
                heappush(heap, (grid[new_i][new_j], new_i, new_j, path[:]))
                visited[new_i][new_j] = True
    
    return []