H, W = map(int, input().split())
grid = [input() for _ in range(H)]

def check_symmetric(grid):
    for i in range(H//2):
        for j in range(W):
            if grid[i][j] != grid[H-1-i][W-1-j]:
                return False
    return True

def check_rows(grid):
    for i in range(H-1):
        for j in range(i+1, H):
            if grid[i] == grid[j]:
                return True
    return False

def check_columns(grid):
    for i in range(W-1):
        for j in range(i+1, W):
            col1 = [grid[k][i] for k in range(H)]
            col2 = [grid[k][j] for k in range(H)]
            if col1 == col2:
                return True
    return False

if check_rows(grid) or check_columns(grid) or not check_symmetric(grid):
    print("NO")
else:
    print("YES")