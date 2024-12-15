def strange_sort_list(lst):
    sorted_lst = []
    while len(lst) > 0:
        min_val = min(lst)
        sorted_lst.append(min_val)
        lst.remove(min_val)
        if len(lst) > 0:
            max_val = max(lst)
            sorted_lst.append(max_val)
            lst.remove(max_val)
    return sorted_lst