def select_words(s, n):
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    words = s.split()
    result = []
    
    for word in words:
        count = 0
        for char in word:
            if char in consonants:
                count += 1
        if count == n:
            result.append(word)
            
    return result