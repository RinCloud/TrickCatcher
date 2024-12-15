def split_words(txt):
    # Check if there are any white spaces in the text
    if ' ' in txt:
        # Split the text on white spaces and return the result
        return txt.split()
    # Check if there are any commas in the text
    elif ',' in txt:
        # Split the text on commas and return the result
        return txt.split(',')
    else:
        # Count the number of lower-case letters with odd order in the alphabet
        count = 0
        for char in txt:
            # Check if the character is a lower-case letter
            if char.islower():
                # Check if the order of the letter in the alphabet is odd
                if ord(char) % 2 == 1:
                    count += 1
        # Return the count
        return count