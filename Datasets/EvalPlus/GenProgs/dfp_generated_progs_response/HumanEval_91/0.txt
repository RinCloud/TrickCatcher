def is_bored(S):
    sentences = S.split('. ') + S.split('? ') + S.split('! ')
    count = 0
    for sentence in sentences:
        if sentence.startswith("I"):
            count += 1
    return count