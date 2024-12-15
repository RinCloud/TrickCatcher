def anti_shuffle(s):
    words = s.split(" ") # split string into words
    ordered_words = [] # list to store ordered words
    for word in words:
        ordered_word = "".join(sorted(word, key=lambda x: ord(x))) # sort characters in word based on ascii value
        ordered_words.append(ordered_word) # add ordered word to list
    return " ".join(ordered_words) # join ordered words with space and return as string