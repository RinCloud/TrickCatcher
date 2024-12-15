def next_smallest(lst):
    if len(lst) < 2:
        return None
    else:
        unique_lst = list(set(lst))
        unique_lst.sort()
        if len(unique_lst) < 2:
            return None
        else:
            return unique_lst[1]