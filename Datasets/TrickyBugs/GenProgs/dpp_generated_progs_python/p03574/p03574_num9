from typing import List

def count_bombs_adjacent_to_empty_squares(H: int, W: int, grid: List[str]) -> List[str]:
    dx = [0, 1, 0, -1, 1, 1, -1, -1]
    dy = [1, 0, -1, 0, 1, -1, 1, -1]
    
    def is_valid(i: int, j: int) -> bool:
        return 0 <= i < H and 0 <= j < W
    
    def count_adjacent_bombs(i: int, j: int) -> int:
        count = 0
        for k in range(8):
            ni, nj = i + dx[k], j + dy[k]
            if is_valid(ni, nj) and grid[ni][nj] == '#':
                count += 1
        return str(count)
    
    result = [['.'] * W for _ in range(H)]
    for i in range(H):
        for j in range(W):
            if grid[i][j] == '.':
                result[i][j] = count_adjacent_bombs(i, j)
            else:
                result[i][j] = '#'
    return ["".join(row) for row in result]

# Read input
H, W = map(int, input().split())
grid = [input() for _ in range(H)]

# Calculate and print the result
result = count_bombs_adjacent_to_empty_squares(H, W, grid)
for row in result:
    print(row)