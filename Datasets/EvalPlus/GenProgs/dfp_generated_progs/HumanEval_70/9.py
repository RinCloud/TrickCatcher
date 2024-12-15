def strange_sort_list(lst):
    sorted_lst = []
    while lst:
        minimum = min(lst)
        sorted_lst.append(minimum)
        lst.remove(minimum)
        if lst:
            maximum = max(lst)
            sorted_lst.append(maximum)
            lst.remove(maximum)
    return sorted_lst