import sys
from collections import deque

def bfs(grid, start):
    visited = [[False] * len(grid[0]) for _ in range(len(grid))]
    queue = deque([(start[0], start[1], 0)])
    visited[start[0]][start[1]] = True
    
    while queue:
        x, y, dist = queue.popleft()
        
        if grid[x][y] == 'T':
            return dist
        
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            new_x, new_y = x + dx, y + dy
            if 0 <= new_x < len(grid) and 0 <= new_y < len(grid[0]) and not visited[new_x][new_y] and grid[new_x][new_y] in ['.', 'T']:
                visited[new_x][new_y] = True
                queue.append((new_x, new_y, dist + 1))
    
    return -1
    

def solve_problem(grid):
    num_leaves = sum([row.count('o') for row in grid])
    
    # Find start and target positions
    start, target = None, None
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 'S':
                start = (i, j)
            elif grid[i][j] == 'T':
                target = (i, j)
    grid[start[0]][start[1]] = '.'
    
    # Perform BFS from start position
    min_removed_leaves = bfs(grid, start)
    
    if min_removed_leaves == -1:
        return -1
    
    return num_leaves - min_removed_leaves


# Read input
H, W = map(int, input().split())
grid = [list(input().strip()) for _ in range(H)]

# Solve problem
result = solve_problem(grid)

# Print result
print(result)