def strange_sort_list(lst):
    sorted_lst = []
    while lst:
        min_value = min(lst)
        sorted_lst.append(min_value)
        lst.remove(min_value)
        if lst:
            max_value = max(lst)
            sorted_lst.append(max_value)
            lst.remove(max_value)
    return sorted_lst