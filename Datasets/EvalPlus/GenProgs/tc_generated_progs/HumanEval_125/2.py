def split_words(txt):
    if ' ' in txt:
        return txt.split()
    elif ',' in txt:
        return txt.split(',')
    else:
        return len([i for i in txt if ord(i) - ord('a') % 2 != 0])  # Corrected the condition to check for odd order in the alphabet