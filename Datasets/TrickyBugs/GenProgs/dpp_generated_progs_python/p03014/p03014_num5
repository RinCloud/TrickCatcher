'''
def find_max_lighted_squares(H, W, grid):
    max_count = 0

    for i in range(H):
        count = 0
        for j in range(W):
            if grid[i][j] == '.':
                count += 1
        max_count = max(max_count, count)

    for i in range(W):
        count = 0
        for j in range(H):
            if grid[j][i] == '.':
                count += 1
        max_count = max(max_count, count)

    return max_count


H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input())

result = find_max_lighted_squares(H, W, grid)
print(result)
'''