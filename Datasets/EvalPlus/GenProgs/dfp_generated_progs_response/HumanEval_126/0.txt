def is_sorted(lst):
    if len(lst) < 2:
        return True
    else:
        sorted_lst = sorted(lst)
        if sorted_lst != lst or len(set(lst)) != len(lst):
            return False
        else:
            return True