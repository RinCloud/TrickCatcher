def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_lst = sorted(set(lst))
    if len(sorted_lst) > 1:
        return sorted_lst[1]
    else:
        return None