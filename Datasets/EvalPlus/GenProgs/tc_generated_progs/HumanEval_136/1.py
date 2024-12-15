def largest_smallest_integers(lst):
    if len(lst) == 0:
        return None, None
    else:
        neg_lst = [x for x in lst if x < 0]
        pos_lst = [x for x in lst if x > 0]
        
        if len(neg_lst) == 0:
            return None, min(pos_lst) if pos_lst else None
        elif len(pos_lst) == 0:
            return max(neg_lst) if neg_lst else None, None
        else:
            return max(neg_lst), min(pos_lst)