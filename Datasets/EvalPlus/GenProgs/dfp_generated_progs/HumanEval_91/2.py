def is_bored(S):
    """
    You'll be given a string of words, and your task is to count the number
    of boredoms. A boredom is a sentence that starts with the word "I".
    Sentences are delimited by '.', '?' or '!'.
    Args:
    - S: a string of words
    Returns:
    - count: the number of boredoms in the string
    """
    count = 0
    sentences = S.split(".")
    for sentence in sentences:
        if sentence.startswith("I"):
            count += 1
    return count