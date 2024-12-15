def strange_sort_list(lst):
    result = []
    sorted_lst = sorted(lst)
    while sorted_lst:
        result.append(sorted_lst.pop(0))
        if sorted_lst:
            result.append(sorted_lst.pop())
    return result