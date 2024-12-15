import string

def shift_string(S, N):
    alphabet = string.ascii_uppercase
    shifted_string = ""
    
    for char in S:
        if char in alphabet:
            shifted_char_index = (alphabet.index(char) + N) % 26
            shifted_string += alphabet[shifted_char_index]
        else:
            shifted_string += char
    
    return shifted_string

# Read input from Standard Input
N = int(input())
S = input()

# Shift the string
result = shift_string(S, N)

# Print the result
print(result)