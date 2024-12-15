def get_closest_vowel(word):
    vowels = ['a', 'e', 'i', 'o', 'u']
    # Remove vowels at the beginning and end of the word
    word = word.strip(vowels)
    # Check if word length is less than 3, return empty string
    if len(word) < 3:
        return ""
    # Traverse the word from right to left
    for i in range(len(word) - 3, -1, -1):
        if word[i].lower() in vowels and word[i+1].lower() not in vowels and word[i+2].lower() not in vowels:
            return word[i]
    # Return empty string if no vowel satisfies the condition
    return ""