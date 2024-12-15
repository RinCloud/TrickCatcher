def histogram(test):
    if len(test)==0:
        return {}
    else:
        test_list = test.split()
        histogram_dict = {}
        for letter in test_list:
            if letter in histogram_dict:
                histogram_dict[letter] += 1
            else:
                histogram_dict[letter] = 1
        max_repetitions = max(histogram_dict.values())
        max_repetitions_dict = {k: v for k, v in histogram_dict.items() if v == max_repetitions}
        return max_repetitions_dict