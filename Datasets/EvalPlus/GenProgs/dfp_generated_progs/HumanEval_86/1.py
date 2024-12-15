def anti_shuffle(s):
    words = s.split()
    ordered_words = ["".join(sorted(word)) for word in words]
    return " ".join(ordered_words)