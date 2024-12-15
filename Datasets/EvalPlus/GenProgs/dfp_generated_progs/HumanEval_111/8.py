def histogram(test):
    hist = {}
    letters = test.split(' ')
    
    for letter in letters:
        if letter in hist:
            hist[letter] += 1
        else:
            hist[letter] = 1
            
    max_count = max(hist.values())
    result = {k: v for k, v in hist.items() if v == max_count}
    
    return result