def next_diverse_word(S):
    # If S is the largest possible diverse word
    if len(S) == 26:
        return -1

    # Find the rightmost character that can be incremented
    for i in range(len(S)-1, -1, -1):
        if ord(S[i]) - ord('a') < 25:
            break

    # Increment the rightmost character
    new_char = chr(ord(S[i]) + 1)

    # Construct the next diverse word
    next_word = S[:i] + new_char + ''.join(chr(ord('a')+j) for j in range(i+1, len(S)))

    return next_word


# Get input from standard input
S = input()

# Find the next diverse word
result = next_diverse_word(S)

# Print the result
print(result)