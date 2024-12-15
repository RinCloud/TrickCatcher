from heapq import heappop, heappush
def minPath(grid, k):
    N = len(grid)
    heap = [(grid[0][0], (0, 0))]  # store (value, (row, col)) pairs in heap
    visited = set([(0, 0)])  # store visited cells
    while k > 1:
        value, pos = heappop(heap)
        row, col = pos
        neighbors = [(row-1, col), (row+1, col), (row, col-1), (row, col+1)]
        for nr, nc in neighbors:
            if 0 <= nr < N and 0 <= nc < N and (nr, nc) not in visited:
                heappush(heap, (grid[nr][nc], (nr, nc)))
                visited.add((nr, nc))
        k -= 1
    return [value for value, _ in heap]