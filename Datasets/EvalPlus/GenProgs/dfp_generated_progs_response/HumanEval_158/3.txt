def find_max(words):
    max_count = 0
    max_word = ""
    for word in words:
        unique_chars = set(word)
        count = len(unique_chars)
        if count > max_count or (count == max_count and word < max_word):
            max_count = count
            max_word = word
    return max_word