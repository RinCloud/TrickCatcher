def get_closest_vowel(word):
    vowels = {'a', 'e', 'i', 'o', 'u'}
    consonants = set()
    for i in range(len(word) - 2, 0, -1):
        if word[i] not in vowels:
            consonants.add(word[i])
        elif consonants:
            return word[i]
    return ""