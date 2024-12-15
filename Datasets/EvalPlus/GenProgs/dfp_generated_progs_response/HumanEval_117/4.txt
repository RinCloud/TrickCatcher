def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants = 0
        for char in word:
            if char.isalpha() and char.lower() not in ['a', 'e', 'i', 'o', 'u']:
                consonants += 1
        if consonants == n:
            result.append(word)
    return result