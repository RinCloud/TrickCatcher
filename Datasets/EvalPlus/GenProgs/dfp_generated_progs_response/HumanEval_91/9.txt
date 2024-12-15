def is_bored(S):
    sentences = S.split('.')
    sentences += S.split('?')
    sentences += S.split('!')
    count = 0
    for sentence in sentences:
        if sentence.strip().startswith("I"):
            count += 1
    return count