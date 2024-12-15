import sys

def count_black_cells(H, W, N, cells):
    grid = [[0] * W for _ in range(H)]
    for a, b in cells:
        grid[a-1][b-1] = 1

    count = [0] * 10
    for i in range(H-2):
        for j in range(W-2):
            num_black = 0
            for x in range(i, i+3):
                for y in range(j, j+3):
                    if grid[x][y] == 1:
                        num_black += 1
            count[num_black] += 1
    
    return count

H, W, N = map(int, input().split())
cells = [list(map(int, input().split())) for _ in range(N)]

result = count_black_cells(H, W, N, cells)

for num in result:
    print(num)