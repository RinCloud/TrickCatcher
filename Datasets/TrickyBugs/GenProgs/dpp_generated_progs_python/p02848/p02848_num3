import string

def shift_string(n, s):
    alphabet = string.ascii_uppercase
    shifted = ""

    for char in s:
        if char in alphabet:
            shift = (alphabet.index(char) + n) % 26
            shifted += alphabet[shift]
        else:
            shifted += char

    return shifted

# Reading input from standard input
n = int(input())
s = input()

# Shifting and printing the result
print(shift_string(n, s))