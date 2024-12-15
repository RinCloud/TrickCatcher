import sys

def is_bingo(grid, selected):
    rows = len(grid)
    cols = len(grid[0])
    
    marked = [[False] * cols for _ in range(rows)]
    
    for num in selected:
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == num:
                    marked[i][j] = True
    
    for i in range(rows):
        if all(marked[i]):
            return True
    
    for j in range(cols):
        if all(marked[i][j] for i in range(rows)):
            return True
    
    if all(marked[i][i] for i in range(rows)):
        return True
    
    if all(marked[i][rows-i-1] for i in range(rows)):
        return True
    
    return False

grid = []

for _ in range(3):
    row = list(map(int, input().split()))
    grid.append(row)

n = int(input())

selected = []

for _ in range(n):
    num = int(input())
    selected.append(num)

if is_bingo(grid, selected):
    print("Yes")
else:
    print("No")