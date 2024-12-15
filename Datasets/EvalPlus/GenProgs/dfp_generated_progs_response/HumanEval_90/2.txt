def next_smallest(lst):
    if len(lst) < 2:
        return None
    
    lst = sorted(set(lst))
    
    if len(lst) >= 2:
        return lst[1]
    
    return None