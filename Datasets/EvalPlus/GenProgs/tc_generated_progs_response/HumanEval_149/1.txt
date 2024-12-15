def sorted_list_sum(lst):
    even_lst = [word for word in lst if len(word) % 2 == 0]
    result = sorted(set(even_lst), key=lambda x: (len(x), x))
    return result