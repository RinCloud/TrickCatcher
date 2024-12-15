def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonant_count = 0
        for char in word:
            if char.lower() not in ['a', 'e', 'i', 'o', 'u'] and char.isalpha():
                consonant_count += 1
        if consonant_count == n:
            result.append(word)
    return result