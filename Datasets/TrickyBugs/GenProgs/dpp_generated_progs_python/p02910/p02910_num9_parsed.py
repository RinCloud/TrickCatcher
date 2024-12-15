s = input()

odd_chars = s[::2]
even_chars = s[1::2]

odd_condition = all(char in ('R', 'U', 'D') for char in odd_chars)
even_condition = all(char in ('L', 'U', 'D') for char in even_chars)

if odd_condition and even_condition:
    print("Yes")
else:
    print("No")