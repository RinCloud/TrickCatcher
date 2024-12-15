def select_words(s, n):
    words = s.split() # split the string into words
    result = [] # create an empty list to store the result
    for word in words:
        consonants = 0 # count of consonants in the current word
        for char in word:
            if char.isalpha() and char.lower() not in ['a', 'e', 'i', 'o', 'u']:
                consonants += 1
        if consonants == n:
            result.append(word)
    return result