def largest_smallest_integers(lst):
    '''
    Create a function that returns a tuple (a, b), where 'a' is
    the largest of negative integers, and 'b' is the smallest
    of positive integers in a list.
    If there is no negative or positive integers, return them as None.
    Examples:
    largest_smallest_integers([2, 4, 1, 3, 5, 7]) == (None, 1)
    largest_smallest_integers([]) == (None, None)
    largest_smallest_integers([0]) == (None, None)
    '''
    if len(lst) == 0:
        return (None, None)
    neg_lst = [i for i in lst if i < 0]
    pos_lst = [i for i in lst if i > 0]
    if len(neg_lst) == 0:
        return (None, min(pos_lst) if pos_lst else None)
    elif len(pos_lst) == 0:
        return (max(neg_lst) if neg_lst else None, None)
    else:
        return (max(neg_lst), min(pos_lst))