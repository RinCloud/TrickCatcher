def histogram(test):
    words = test.split()
    count = {}
    for word in words:
        count[word] = count.get(word, 0) + 1
    max_count = max(count.values())
    result = {key: value for key, value in count.items() if value == max_count}
    return result