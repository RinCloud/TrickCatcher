def min_tiles_to_repaint(S):
    count = 0
    prev_tile = None
    for tile in S:
        if prev_tile == tile:
            count += 1
            if tile == '0':
                prev_tile = '1'
            else:
                prev_tile = '0'
        else:
            prev_tile = tile
    return count

# Read the input from Standard Input
S = input().strip()

# Calculate and print the minimum number of tiles to repaint
print(min_tiles_to_repaint(S))
