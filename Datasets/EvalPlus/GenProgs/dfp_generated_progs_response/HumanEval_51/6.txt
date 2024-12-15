def remove_vowels(text):
    vowels = 'aeiouAEIOU'
    return ''.join([char for char in text if char not in vowels])