def count_adjacent_bombs(grid, i, j):
    count = 0
    rows = len(grid)
    cols = len(grid[0])
    
    if i > 0 and j > 0 and grid[i-1][j-1] == '#':
        count += 1
    if i > 0 and grid[i-1][j] == '#':
        count += 1
    if i > 0 and j < cols-1 and grid[i-1][j+1] == '#':
        count += 1
    if j > 0 and grid[i][j-1] == '#':
        count += 1
    if j < cols-1 and grid[i][j+1] == '#':
        count += 1
    if i < rows-1 and j > 0 and grid[i+1][j-1] == '#':
        count += 1
    if i < rows-1 and grid[i+1][j] == '#':
        count += 1
    if i < rows-1 and j < cols-1 and grid[i+1][j+1] == '#':
        count += 1
        
    return count


def replace_dots(grid):
    rows = len(grid)
    cols = len(grid[0])
    result = []
    
    for i in range(rows):
        row = []
        for j in range(cols):
            if grid[i][j] == '#':
                row.append('#')
            else:
                adjacent_bombs = count_adjacent_bombs(grid, i, j)
                row.append(str(adjacent_bombs))
        result.append(''.join(row))
    
    return result


H, W = map(int, input().split())
grid = [input() for _ in range(H)]
result = replace_dots(grid)
for row in result:
    print(row)