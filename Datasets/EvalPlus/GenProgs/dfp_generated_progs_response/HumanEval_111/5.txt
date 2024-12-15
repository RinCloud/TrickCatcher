def histogram(test):
    letters = test.split()   # splitting the input string into a list of letters
    counts = {}   # initializing an empty dictionary to store the letter counts
    
    # iterating over the letters
    for letter in letters:
        if letter in counts:
            counts[letter] += 1
        else:
            counts[letter] = 1
    
    max_count = max(counts.values())   # finding the maximum count
    
    result = {}   # initializing an empty dictionary to store the letters with maximum count
    for letter, count in counts.items():
        if count == max_count:
            result[letter] = count
    
    return result