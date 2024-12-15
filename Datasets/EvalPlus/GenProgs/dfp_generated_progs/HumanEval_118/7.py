def get_closest_vowel(word):
    vowels = 'AEIOUaeiou'
    word = word[::-1]
    for i in range(1, len(word)-1):
        if word[i] not in vowels and word[i-1] in vowels and word[i+1] in vowels:
            return word[i]
    return ''