def histogram(test):
    if test == '':
        return {}
    letter_count = {}
    max_count = 0
    for letter in test.split(' '):
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1
        if letter_count[letter] > max_count:
            max_count = letter_count[letter]
    result = {}
    for letter in letter_count:
        if letter_count[letter] == max_count:
            result[letter] = letter_count[letter]
    return result