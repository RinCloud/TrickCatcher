def is_bored(S):
    count = 0
    sentences = re.split(r'[.!?]', S)
    for sentence in sentences:
        words = sentence.strip().split()
        if len(words) > 0 and words[0] == "I":
            count += 1
    return count
import re