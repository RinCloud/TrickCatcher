# Program:

S = input()

odd_positions = S[::2]
even_positions = S[1::2]

odd_valid = all(char in ['R', 'U', 'D'] for char in odd_positions)
even_valid = all(char in ['L', 'U', 'D'] for char in even_positions)

if odd_valid and even_valid:
    print("Yes")
else:
    print("No")