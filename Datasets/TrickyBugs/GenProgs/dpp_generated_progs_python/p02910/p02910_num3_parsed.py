# Program:

S = input()

odd_positions = S[::2]  # Get characters at odd positions
even_positions = S[1::2]  # Get characters at even positions

# Check if every character in odd_positions is R, U, or D and
# every character in even_positions is L, U, or D
if all(x in ['R', 'U', 'D'] for x in odd_positions) and all(x in ['L', 'U', 'D'] for x in even_positions):
    print('Yes')
else:
    print('No')