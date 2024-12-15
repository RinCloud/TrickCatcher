def compute_subrectangles(H, W, N, cells):
    counts = [0] * 10
    
    # create a 2D grid with H rows and W columns
    grid = [[0] * W for _ in range(H)]
    
    # paint the cells with black
    for i in range(N):
        r, c = cells[i]
        grid[r-1][c-1] = 1
    
    # count the number of subrectangles with different number of black cells
    for r in range(H-2):
        for c in range(W-2):
            black_count = 0
            for i in range(3):
                for j in range(3):
                    if grid[r+i][c+j] == 1:
                        black_count += 1
            counts[black_count] += 1
    
    return counts


# get the input
H, W, N = map(int, input().split())
cells = [tuple(map(int, input().split())) for _ in range(N)]

# compute the subrectangles
counts = compute_subrectangles(H, W, N, cells)

# print the counts
for count in counts:
    print(count)