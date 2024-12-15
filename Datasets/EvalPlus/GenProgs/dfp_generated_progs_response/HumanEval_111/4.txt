def histogram(test):
    counts = {}
    for letter in test.split():
        if letter in counts:
            counts[letter] += 1
        else:
            counts[letter] = 1
    
    max_count = max(counts.values())
    result = {}
    for letter, count in counts.items():
        if count == max_count:
            result[letter] = count
    
    return result