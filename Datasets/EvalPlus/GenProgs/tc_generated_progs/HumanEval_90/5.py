def next_smallest(lst):
    if len(lst) < 2:
        return None
    elif len(lst) == 2:
        if lst[0] == lst[1]:
            return None
        else:
            return min(lst)
    else:
        sorted_list = sorted(lst)
        unique_elements = list(set(sorted_list))
        if len(unique_elements) < 2:
            return None
        else:
            return unique_elements[1]