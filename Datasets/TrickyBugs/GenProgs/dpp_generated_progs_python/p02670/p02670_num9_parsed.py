def main():
    N = int(input())
    sequence = list(map(int, input().split()))

    # Initialize the grid with 0
    grid = [[0]*N for _ in range(N)]
    
    # Calculate the row and column of each viewer and update the grid accordingly
    for i in range(N):
        for j in range(N):
            viewer = (i*N) + j + 1
            row = (sequence.index(viewer) // N)
            col = (sequence.index(viewer) % N)
            grid[i][j] = ((row - i) ** 2 + (col - j) ** 2)
    
    # Compute the number of pairs of viewers that hate each other
    pairs = 0
    for i in range(N):
        for j in range(N):
            viewer = (i*N) + j + 1
            for k in range(i+1, N):
                for l in range(N):
                    other_viewer = (k*N) + l + 1
                    if grid[i][j] > grid[k][l] and viewer < other_viewer:
                        pairs += 1
    
    print(pairs)


if __name__ == "__main__":
    main()