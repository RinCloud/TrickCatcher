def remove_vowels(text):
    """
    remove_vowels is a function that takes string and returns string without vowels.
    """
    vowels = "aeiouAEIOU"
    return ''.join([char for char in text if char not in vowels])