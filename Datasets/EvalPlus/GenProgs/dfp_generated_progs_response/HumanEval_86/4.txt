def anti_shuffle(s):
    words = s.split(' ')
    ordered_words = []
    for word in words:
        ordered_word = ''.join(sorted(word))
        ordered_words.append(ordered_word)
    ordered_sentence = ' '.join(ordered_words)
    return ordered_sentence