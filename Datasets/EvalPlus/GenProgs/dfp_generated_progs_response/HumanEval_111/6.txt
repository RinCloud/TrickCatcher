def histogram(test):
    count = {}
    for letter in test.split():
        if letter not in count:
            count[letter] = 1
        else:
            count[letter] += 1
    max_count = max(count.values())
    result = {}
    for letter, letter_count in count.items():
        if letter_count == max_count:
            result[letter] = letter_count
    return result