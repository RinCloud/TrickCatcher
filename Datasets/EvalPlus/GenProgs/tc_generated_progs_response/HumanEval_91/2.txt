def is_bored(S):
    count = 0
    sentences = re.split(r'[.!?]', S)
    for sentence in sentences:
        words = sentence.split()
        if words and words[0] == "I":
            count += 1
    return count