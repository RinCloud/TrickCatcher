def is_symmetric(grid):
    h = len(grid)
    w = len(grid[0])
    
    for i in range(h):
        for j in range(w):
            if grid[i][j] != grid[h-1-i][w-1-j]:
                return False
    
    return True


def main():
    h, w = map(int, input().split())
    grid = [input() for _ in range(h)]
    
    if is_symmetric(grid):
        print("YES")
    else:
        print("NO")

        
if __name__ == "__main__":
    main()