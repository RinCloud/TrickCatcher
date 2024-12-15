def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants_count = 0
        for char in word:
            if char.lower() not in ['a', 'e', 'i', 'o', 'u']:
                consonants_count += 1
        if consonants_count == n:
            result.append(word)
    return result