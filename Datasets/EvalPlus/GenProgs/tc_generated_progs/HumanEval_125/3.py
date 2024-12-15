def split_words(txt):
    if ' ' in txt:
        return txt.split()
    elif ',' in txt:
        return [word.strip() for word in txt.split(',') if word.strip()]
    else:
        return len([char for char in txt if ord(char) < ord('a') + 26 and ord(char) % 2 != 0])