def remove_vowels(text):
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    new_text = ''
    for char in text:
        if char not in vowels:
            new_text += char
    return new_text