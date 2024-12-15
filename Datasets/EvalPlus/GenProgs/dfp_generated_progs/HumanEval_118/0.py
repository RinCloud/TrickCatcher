def get_closest_vowel(word):
    vowels = ['a', 'e', 'i', 'o', 'u']
    word = word.lower()
    
    if len(word) <= 2:
        return ""
    
    for i in range(2, len(word)):
        if word[i] in vowels and word[i-1] not in vowels and word[i-2] not in vowels:
            return word[i].upper()
        
    return ""