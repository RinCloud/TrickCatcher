import sys
from collections import defaultdict

def main():
    H, W, N = map(int, sys.stdin.readline().split())

    # Create a defaultdict to keep track of black cells
    black_cells = defaultdict(int)
    
    # Loop through each painted cell and increment count
    for _ in range(N):
        a_i, b_i = map(int, sys.stdin.readline().split())
        black_cells[(a_i, b_i)] += 1

    # Create a grid with 0 cells
    grid = [[0] * (W+2) for _ in range(H+2)]
    
    # Loop through all cells and check for black cells
    for i in range(1, H+1):
        for j in range(1, W+1):
            if (i, j) in black_cells:
                grid[i][j] = black_cells[(i, j)]

    # Calculate the number of subrectangles with exactly j black cells for each j
    result = [0] * 10
    for i in range(1, H+1):
        for j in range(1, W+1):
            for dx in range(-1, 2):
                for dy in range(-1, 2):
                    result[grid[i+dx][j+dy]] += 1

    # Print the result
    for count in result:
        print(count)

if __name__ == '__main__':
    main()