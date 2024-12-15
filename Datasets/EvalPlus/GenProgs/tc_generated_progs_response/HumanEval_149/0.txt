def sorted_list_sum(lst):
    odd_lst = list(filter(lambda x: len(x) % 2 == 1, lst))
    return sorted(list(set(lst) - set(odd_lst)), key=lambda x: (len(x), x))