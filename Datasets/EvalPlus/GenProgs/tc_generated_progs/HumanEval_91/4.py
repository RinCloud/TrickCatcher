def is_bored(S):
    count = 0
    sentences = re.split(r'[.!?]', S)  # split sentences by '.', '?', or '!'
    
    for sentence in sentences:
        words = sentence.strip().split()
        if words and words[0] == "I":  # Check if 'words' is not empty before checking the first word
            count += 1
            
    return count