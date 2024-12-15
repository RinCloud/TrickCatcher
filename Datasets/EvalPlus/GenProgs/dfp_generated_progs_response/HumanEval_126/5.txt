def is_sorted(lst):
    if lst == sorted(lst) and len(set(lst)) == len(lst):
        return True
    return False