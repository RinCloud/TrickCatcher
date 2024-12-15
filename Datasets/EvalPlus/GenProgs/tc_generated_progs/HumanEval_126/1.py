def is_sorted(lst):
    if len(lst) == 1:
        return True
    for i in range(len(lst)-1):
        if lst[i] > lst[i+1]:
            return False
        if i < len(lst)-2 and lst[i] == lst[i+1] == lst[i+2]:
            return False
    return True