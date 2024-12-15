def count_subrectangles(H, W, N, painted_cells):
    # create an empty grid
    grid = [[0]*W for _ in range(H)]
    
    # paint the cells
    for cell in painted_cells:
        row, col = cell
        grid[row-1][col-1] = 1
    
    # initialize count of black cells in subrectangles
    count = [0] * 10
    
    # iterate over each cell in the grid
    for i in range(H - 2):
        for j in range(W - 2):
            black_cells = 0
            # count black cells in the subrectangle
            for x in range(i, i+3):
                for y in range(j, j+3):
                    black_cells += grid[x][y]
            # increment the count for the respective number of black cells
            count[black_cells] += 1
    
    # print the counts
    for c in count:
        print(c)

# read input
H, W, N = map(int, input().split())
painted_cells = [list(map(int, input().split())) for _ in range(N)]

# call the function to count subrectangles
count_subrectangles(H, W, N, painted_cells)