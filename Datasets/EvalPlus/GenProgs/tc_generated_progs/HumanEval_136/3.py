def largest_smallest_integers(lst):
    if len(lst) == 0:
        return None, None
    else:
        neg_lst = [i for i in lst if i < 0]
        pos_lst = [i for i in lst if i > 0]
        
        if len(neg_lst) == 0:
            max_neg = None
        else:
            max_neg = max(neg_lst)
        
        if len(pos_lst) == 0:
            min_pos = None
        else:
            min_pos = min(pos_lst)
        
        return max_neg, min_pos