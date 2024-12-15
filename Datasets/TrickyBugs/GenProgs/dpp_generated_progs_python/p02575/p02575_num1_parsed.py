from heapq import heappop, heappush

def main():
    H, W = map(int, input().split())
    grid = [[0] * (W + 1) for _ in range(H + 1)]
    
    for i in range(1, H + 1):
        A, B = map(int, input().split())
        for j in range(1, A + 1):
            grid[i][j] = float('inf')
        for j in range(A + 1, B + 1):
            grid[i][j] = grid[i - 1][j] + 1
        for j in range(B + 1, W + 1):
            grid[i][j] = min(grid[i][j], grid[i - 1][j], grid[i][j - 1] + 1)
    
    for i in range(1, H + 1):
        if grid[i][W] == float('inf'):
            print(-1)
        else:
            print(grid[i][W])

if __name__ == '__main__':
    main()