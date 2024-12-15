def anti_shuffle(s):
    words = s.split()    # split the string into individual words
    ordered_words = []   # initialize an empty list to store the ordered words
    
    for word in words:
        ordered_word = ''.join(sorted(word))   # sort the characters of each word in ascending order
        ordered_words.append(ordered_word)     # add the ordered word to the list
    
    ordered_sentence = ' '.join(ordered_words)  # join the ordered words into a single string with spaces
    return ordered_sentence