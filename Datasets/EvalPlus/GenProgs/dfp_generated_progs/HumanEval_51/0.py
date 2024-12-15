def remove_vowels(text): 
    # Create a list of vowels
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    
    # Initialize an empty string to store the result
    result = ''
    
    # Iterate through each character in the text
    for char in text:
        # If the character is not a vowel, add it to the result string
        if char not in vowels:
            result += char
    
    # Return the result string without vowels
    return result