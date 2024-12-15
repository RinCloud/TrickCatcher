def histogram(test):
    counts = {}
    if not test:
        return counts
    
    words = test.split()
    for word in words:
        if word in counts:
            counts[word] += 1
        else:
            counts[word] = 1
    
    max_count = max(counts.values())
    result = {}
    for word, count in counts.items():
        if count == max_count:
            result[word] = count
    
    return result