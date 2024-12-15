def histogram(test):
    hist_dict = {}
    test_list = test.split()
    for letter in test_list:
        if letter in hist_dict:
            hist_dict[letter] += 1
        else:
            hist_dict[letter] = 1
        
    max_count = max(hist_dict.values())
    return {k: v for k, v in hist_dict.items() if v == max_count}