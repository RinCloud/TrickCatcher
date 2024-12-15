def split_words(txt):
    if ' ' in txt:
        return txt.split()
    elif ',' in txt:
        return txt.split(',')
    else:
        lowercase_letters = [c for c in txt if c.islower()]
        return sum(ord(c) % 2 == 1 for c in lowercase_letters)