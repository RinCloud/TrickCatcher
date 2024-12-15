def is_bored(S):
    sentences = S.split(".")
    sentences = [sentence.strip() for sentence in sentences]
   
    boredom_count = 0
    for sentence in sentences:
        if sentence.startswith("I"):
            boredom_count += 1
   
    return boredom_count