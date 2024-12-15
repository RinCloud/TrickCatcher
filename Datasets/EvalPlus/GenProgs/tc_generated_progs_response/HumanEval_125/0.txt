def split_words(txt):
    if ' ' in txt:
        return txt.split()
    elif ',' in txt:
        return [word.strip() for word in txt.split(',')]
    else:
        return len([char for char in txt if ord('a') <= ord(char.lower()) <= ord('z') and (ord(char.lower()) - ord('a')) % 2 != 0])