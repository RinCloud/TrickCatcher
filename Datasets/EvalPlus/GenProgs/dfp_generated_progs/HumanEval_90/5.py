def next_smallest(lst):
    if len(lst) < 2:
        return None
    
    sorted_lst = sorted(lst)
    return sorted_lst[1]