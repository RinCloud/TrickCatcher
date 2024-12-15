def find_next_diverse_word(S):
    distinct_chars = set()
    for i in range(len(S)-1, -1, -1):
        if S[i] not in distinct_chars:
            distinct_chars.add(S[i])
            S = S[:i] + chr(ord(S[i]) + 1) + S[i+1:]
            return S
    return -1

# Taking input from standard input
S = input()

# Finding the next diverse word
next_diverse_word = find_next_diverse_word(S)

# Printing the output
print(next_diverse_word)
