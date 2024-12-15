def is_bored(S):
    boredoms = 0
    sentences = S.split('. ')
    for sentence in sentences:
        if sentence.startswith('I'):
            boredoms += 1
    return boredoms