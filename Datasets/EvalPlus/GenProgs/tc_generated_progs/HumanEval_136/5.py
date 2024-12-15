def largest_smallest_integers(lst):
    if len(lst) == 0:
        return None, None
    elif len(lst) == 1:
        if lst[0] > 0:
            return None, lst[0]
        elif lst[0] < 0:
            return lst[0], None
        else:
            return None, None
    else:
        neg_lst = [i for i in lst if i < 0]
        pos_lst = [i for i in lst if i > 0]
        
        if len(neg_lst) == 0:
            return None, min(pos_lst) if pos_lst else None
        elif len(pos_lst) == 0:
            return max(neg_lst) if neg_lst else None, None
        else:
            return max(neg_lst), min(pos_lst)