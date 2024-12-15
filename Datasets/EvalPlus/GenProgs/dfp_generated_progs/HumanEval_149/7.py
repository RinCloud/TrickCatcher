def sorted_list_sum(lst):
    even_len_words = [word for word in lst if len(word) % 2 == 0]
    sorted_words = sorted(even_len_words, key=lambda x: (len(x), x))
    return sorted_words