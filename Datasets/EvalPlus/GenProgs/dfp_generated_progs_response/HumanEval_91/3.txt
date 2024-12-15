def is_bored(S):
    """
    You'll be given a string of words, and your task is to count the number
    of boredoms. A boredom is a sentence that starts with the word "I".
    Sentences are delimited by '.', '?' or '!'.
   
    For example:
    >>> is_bored("Hello world")
    0
    >>> is_bored("The sky is blue. The sun is shining. I love this weather")
    1
    """
    # Initialize boredom count
    count = 0
    
    # Split the string into sentences
    sentences = S.split('.')
    sentences += S.split('?')
    sentences += S.split('!')
    
    # Iterate over each sentence
    for sentence in sentences:
        # If the sentence starts with "I", increment the boredom count
        if sentence.strip().startswith('I'):
            count += 1
    
    return count