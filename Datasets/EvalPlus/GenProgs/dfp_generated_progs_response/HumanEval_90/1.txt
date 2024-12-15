def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_lst = sorted(lst)
    min_num = sorted_lst[0]
    for i in sorted_lst:
        if i > min_num:
            return i
    return None