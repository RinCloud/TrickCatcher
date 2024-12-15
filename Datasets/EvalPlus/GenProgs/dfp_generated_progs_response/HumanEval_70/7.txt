def strange_sort_list(lst):
    result = []
    sorted_lst = sorted(lst)
    while len(sorted_lst) > 0:
        result.append(sorted_lst.pop(0))
        if len(sorted_lst) > 0:
            result.append(sorted_lst.pop())
    return result