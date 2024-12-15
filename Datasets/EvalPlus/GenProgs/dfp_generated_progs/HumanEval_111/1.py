def histogram(test):
    letter_count = {}
    test = test.split()
    
    for letter in test:
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1
    
    max_count = max(letter_count.values())
    
    max_letters = {}
    
    for letter, count in letter_count.items():
        if count == max_count:
            max_letters[letter] = count
    
    return max_letters