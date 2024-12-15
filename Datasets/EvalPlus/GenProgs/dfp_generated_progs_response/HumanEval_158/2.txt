def find_max(words):
    unique_chars = []
    for word in words:
        unique_chars.append(len(set(word)))
    max_unique_chars = max(unique_chars)
    max_word = ""
    for word in words:
        if len(set(word)) == max_unique_chars:
            if max_word == "" or word < max_word:
                max_word = word
    return max_word