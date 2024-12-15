def find_complexity(H, W, grid):
    def check_complexity(grid):
        for row in grid:
            if row != grid[0]:
                return False
        return True
    
    def divide_grid(grid):
        max_complexity = 0
        for i in range(1, len(grid)):
            subgrid_1 = grid[:i]
            subgrid_2 = grid[i:]
            complexity_1 = max(max_complexity, find_complexity(len(subgrid_1), len(subgrid_1[0]), subgrid_1))
            complexity_2 = max(max_complexity, find_complexity(len(subgrid_2), len(subgrid_2[0]), subgrid_2))
            max_complexity = max(max_complexity, max(complexity_1, complexity_2))
        return max_complexity + 1
    
    if check_complexity(grid):
        return 0
    else:
        return divide_grid(grid)

H, W = map(int, input().split())
grid = [list(input()) for _ in range(H)]

print(find_complexity(H, W, grid))
