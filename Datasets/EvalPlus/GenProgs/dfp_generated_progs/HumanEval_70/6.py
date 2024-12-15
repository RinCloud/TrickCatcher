def strange_sort_list(lst):
    sorted_lst = []
    while len(lst) > 0:
        min_value = min(lst)
        sorted_lst.append(min_value)
        lst.remove(min_value)
        if len(lst) > 0:
            max_value = max(lst)
            sorted_lst.append(max_value)
            lst.remove(max_value)
    return sorted_lst