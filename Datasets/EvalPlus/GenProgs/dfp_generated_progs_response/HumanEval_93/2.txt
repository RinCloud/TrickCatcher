def encode(message):
    encoded = ""
    vowels = "aeiouAEIOU"
    for letter in message:
        if letter.isalpha() and letter.islower():
            encoded += letter.upper()
        elif letter.isalpha() and letter.isupper():
            encoded += letter.lower()
        elif letter in vowels:
            letter_index = ord(letter.lower()) - ord('a')
            encoded += chr((letter_index + 2) % 26 + ord('a')).upper()
        else:
            encoded += letter
    return encoded