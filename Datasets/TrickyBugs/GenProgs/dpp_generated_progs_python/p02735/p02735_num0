def count_operations(H, W, grid):
    count = 0
    for r in range(H):
        for c in range(W):
            if (r, c) == (0, 0) or (r, c) == (H-1, W-1):
                continue
            if r % 2 == 0:
                count += 1 if grid[r][c] == '#' else 0
            else:
                count += 1 if grid[r][c] == '.' else 0
    return count

H, W = map(int, input().split())
grid = []
for _ in range(H):
    row = input().strip()
    grid.append(row)

print(count_operations(H, W, grid))