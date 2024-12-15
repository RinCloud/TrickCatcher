def select_words(s, n):
    consonants = 'bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ'
    words = s.split()
    selected_words = []
    for word in words:
        count = 0
        for letter in word:
            if letter in consonants:
                count += 1
        if count == n:
            selected_words.append(word)
    return selected_words