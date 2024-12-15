def find_next_diverse_word(word):
    n = len(word)
    if n == 26:
        return -1
    else:
        letters = [0] * 26
        for c in word:
            letters[ord(c) - ord('a')] = 1
        for i in range(26):
            if letters[i] == 0:
                return word + chr(ord('a') + i)
    return -1

S = input().strip()
result = find_next_diverse_word(S)
print(result)