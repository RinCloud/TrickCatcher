#Program
board = input()

# Count the number of black and white stones
num_black = board.count('B')
num_white = board.count('W')

# Determine the minimum number of new stones needed
min_stones = min(num_black, num_white)

print(min_stones)