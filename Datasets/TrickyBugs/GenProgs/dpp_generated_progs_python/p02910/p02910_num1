# Program

S = input()

# Check if every character in odd positions is 'R', 'U', or 'D'
odd_positions = S[::2]
odd_positions_valid = all(char in ['R', 'U', 'D'] for char in odd_positions)

# Check if every character in even positions is 'L', 'U', or 'D'
even_positions = S[1::2]
even_positions_valid = all(char in ['L', 'U', 'D'] for char in even_positions)

# Print 'Yes' if both conditions are satisfied, otherwise print 'No'
if odd_positions_valid and even_positions_valid:
    print('Yes')
else:
    print('No')