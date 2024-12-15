# Getting the input
N = int(input())
S = input()

# Shifting each character in the string
result = ""
for char in S:
    # Shifting the character by N positions
    shifted_char = chr((ord(char) - ord('A') + N) % 26 + ord('A'))
    result += shifted_char

# Printing the result
print(result)