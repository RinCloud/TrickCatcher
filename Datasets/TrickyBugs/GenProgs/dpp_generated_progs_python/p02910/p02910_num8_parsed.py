# Program

s = input()

odd_pos_chars = s[::2]
even_pos_chars = s[1::2]

if all(char in ['R', 'U', 'D'] for char in odd_pos_chars) and all(char in ['L', 'U', 'D'] for char in even_pos_chars):
    print("Yes")
else:
    print("No")