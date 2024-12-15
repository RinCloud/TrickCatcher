def find_next_word(S):
    # Check if S already contains all possible letters
    if len(S) == 26:
        return -1

    # Find the first letter that is not 'z'
    i = len(S) - 1
    while S[i] == 'z':
        i -= 1

    # Create the next word by replacing the character at index i
    next_word = S[:i] + chr(ord(S[i]) + 1) + 'a' * (len(S) - i - 1)
    return next_word

# Read the input
S = input()

# Find the next word
next_word = find_next_word(S)

# Print the result
print(next_word)