from typing import List

def find_complexity(H: int, W: int, grid: List[List[str]]) -> int:
    def calculate_complexity(grid: List[List[str]]) -> int:
        black_count = sum(row.count('#') for row in grid)
        white_count = H * W - black_count
        if black_count == 0 or white_count == 0:
            return 0
        return max(calculate_complexity(grid[:H//2][:W//2]),
                   calculate_complexity(grid[:H//2][W//2:]),
                   calculate_complexity(grid[H//2:][:W//2]),
                   calculate_complexity(grid[H//2:][W//2:])) + 1
    
    return calculate_complexity(grid)


# Read input from standard input
H, W = map(int, input().split())
grid = [list(input()) for _ in range(H)]

# Calculate the complexity of the grid
complexity = find_complexity(H, W, grid)

# Print the complexity
print(complexity)
