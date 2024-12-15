def sorted_list_sum(lst):
    new_lst = [word for word in lst if len(word) % 2 == 0]
    return sorted(new_lst, key=lambda x: (len(x), x))