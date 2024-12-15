def is_bored(S):
    boredoms = 0
    sentences = S.split('.')
    for sentence in sentences:
        word_list = sentence.split()
        if len(word_list) > 0 and word_list[0] == "I":
            boredoms += 1
    return boredoms