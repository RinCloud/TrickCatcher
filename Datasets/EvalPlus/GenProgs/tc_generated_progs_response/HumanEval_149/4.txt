def sorted_list_sum(lst):
    odd_lst = list(filter(lambda x: len(x) % 2 == 1, lst))
    result = list(set(lst) - set(odd_lst))
    result.sort(key=lambda x: (len(x), x))
    return result