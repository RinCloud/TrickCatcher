def select_words(s, n):
    words = s.split()
    selected_words = []
    
    for word in words:
        consonant_count = 0
        for char in word:
            if char.isalpha() and char.lower() not in ['a', 'e', 'i', 'o', 'u']:
                consonant_count += 1
        
        if consonant_count == n:
            selected_words.append(word)
    
    return selected_words