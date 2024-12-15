def solve(H, W, grid):
    s_row = s_col = t_row = t_col = -1
    
    for i in range(H):
        for j in range(W):
            if grid[i][j] == 'S':
                s_row = i
                s_col = j
            elif grid[i][j] == 'T':
                t_row = i
                t_col = j
    
    if (s_row == t_row) or (s_col == t_col):
        return -1
    
    count_leaves = 0
    for i in range(H):
        if (i != s_row) and (i != t_row):
            count_leaves += (grid[i][s_col] == 'o')
    for j in range(W):
        if (j != s_col) and (j != t_col):
            count_leaves += (grid[s_row][j] == 'o')
    
    return count_leaves

H, W = map(int, input().split())
grid = [list(input().strip()) for _ in range(H)]
res = solve(H, W, grid)
print(res)
