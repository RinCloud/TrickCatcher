# Program:

def min_new_stones(S):
    n = len(S) # Number of stones on the board
    black_count = 0 # Count of black stones
    white_count = 0 # Count of white stones

    for stone in S:
        if stone == 'B':
            black_count += 1
        else:
            white_count += 1
    
    if black_count == 0 or white_count == 0:
        return 0
    
    if S[0] == 'B' and S[-1] == 'W':
        return min(black_count, white_count)
    elif S[0] == 'W' and S[-1] == 'B':
        return max(black_count, white_count)
    else:
        return max(black_count, white_count) - 1

# Getting the input
S = input()

# Output the minimum number of new stones that Jiro needs to place
print(min_new_stones(S))