def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_lst = sorted(lst)
    if sorted_lst[0] == sorted_lst[1]:
        return None
    return sorted_lst[1]