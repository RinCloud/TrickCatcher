def largest_smallest_integers(lst):
    neg_integers = [x for x in lst if x < 0]
    pos_integers = [x for x in lst if x > 0]
    
    if len(neg_integers) == 0:
        largest_neg = None
    else:
        largest_neg = max(neg_integers)
        
    if len(pos_integers) == 0:
        smallest_pos = None
    else:
        smallest_pos = min(pos_integers)
        
    return (largest_neg, smallest_pos)