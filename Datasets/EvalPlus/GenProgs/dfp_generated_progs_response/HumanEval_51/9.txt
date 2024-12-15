def remove_vowels(text):
    """
    remove_vowels is a function that takes string and returns string without vowels.
    """
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    return ''.join([char for char in text if char not in vowels])