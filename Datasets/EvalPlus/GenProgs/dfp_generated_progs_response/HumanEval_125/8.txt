def split_words(txt):
    if " " in txt:
        return txt.split()
    elif "," in txt:
        return txt.split(",")
    else:
        count = 0
        for letter in txt.lower():
            if ord(letter) % 2 != 0:
                count += 1
        return count