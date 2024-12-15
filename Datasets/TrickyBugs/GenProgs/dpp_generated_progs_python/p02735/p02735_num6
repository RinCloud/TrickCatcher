def main():
    # Read input
    h, w = map(int, input().split())
    grid = [input() for _ in range(h)]

    # Initialize count
    count = 0

    # Check if (1, 1) and (h, w) are already white
    if grid[0][0] == '.' and grid[h - 1][w - 1] == '.':
        count -= 1
    
    # Check if (1, 1) or (h, w) are black
    if grid[0][0] == '#' or grid[h - 1][w - 1] == '#':
        count += 1
    
    # Iterate through each pair (r0, c0, r1, c1)
    for r0 in range(h):
        for c0 in range(w):
            for r1 in range(r0, h):
                for c1 in range(c0, w):
                    # Check if all squares in the pair are black
                    all_black = True
                    for i in range(r0, r1+1):
                        for j in range(c0, c1+1):
                            if grid[i][j] != '#':
                                all_black = False
                                break
                        if not all_black:
                            break
                    
                    # If all squares are black, increment count
                    if all_black:
                        count += 1
    
    # Print minimum number of operations needed
    print(count)

if __name__ == "__main__":
    main()