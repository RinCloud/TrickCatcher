def split_words(txt):
    if ' ' in txt:
        return txt.split(' ')
    elif ',' in txt:
        return txt.split(',')
    else:
        count = 0
        for c in txt.lower():
            if ord(c) % 2 != 0:
                count += 1
        return count