def next_smallest(lst):
    if len(lst) < 2:
        return None
    elif len(lst) == 2:
        if lst[0] == lst[1]:
            return None
        else:
            return min(lst)
    else:
        sorted_lst = sorted(lst)
        unique_values = list(set(sorted_lst))
        if len(unique_values) < 2:
            return None
        return unique_values[1]