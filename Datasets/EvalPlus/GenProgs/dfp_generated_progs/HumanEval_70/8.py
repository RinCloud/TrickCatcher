def strange_sort_list(lst):
    sorted_lst = []
    while lst:
        min_num = min(lst)
        sorted_lst.append(min_num)
        lst.remove(min_num)
        if lst:
            max_num = max(lst)
            sorted_lst.append(max_num)
            lst.remove(max_num)
    return sorted_lst