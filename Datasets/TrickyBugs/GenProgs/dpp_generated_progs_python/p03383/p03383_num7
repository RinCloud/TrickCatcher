def can_be_symmetric(grid):
    h, w = len(grid), len(grid[0])
    for i in range(h // 2):
        for j in range(w // 2):
            if grid[i][j] != grid[h - i - 1][w - j - 1]:
                return False
    return True

def solve():
    h, w = map(int, input().split())
    grid = [input() for _ in range(h)]
    if can_be_symmetric(grid):
        print("YES")
    else:
        print("NO")

solve()