def split_words(txt):
    if ' ' in txt:
        return txt.split(' ')
    elif ',' in txt:
        return txt.split(',')
    else:
        return sum(1 for char in txt if ord('a') <= ord(char) <= ord('z') and ord(char) % 2 != 0)