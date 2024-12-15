def anti_shuffle(s):
    words = s.split()  # Split the string into words
    ordered_words = []  # List to store the ordered words
    
    for word in words:
        # Sort the characters in the word based on ascii value
        ordered_word = ''.join(sorted(word, key=lambda x: ord(x)))
        ordered_words.append(ordered_word)  # Add the ordered word to the list
    # Join the ordered words with blank spaces in between
    ordered_sentence = ' '.join(ordered_words)
    
    return ordered_sentence