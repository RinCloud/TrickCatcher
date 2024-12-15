def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonant_count = 0
        for letter in word:
            if letter.lower() not in ['a', 'e', 'i', 'o', 'u']:
                consonant_count += 1
        if consonant_count == n:
            result.append(word)
    return result