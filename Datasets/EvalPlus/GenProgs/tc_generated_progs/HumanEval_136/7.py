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
    neg_lst = [i for i in lst if i < 0]
    pos_lst = [i for i in lst if i > 0]
    
    if not neg_lst:
        neg_result = None
    else:
        neg_result = max(neg_lst)
    if not pos_lst:
        pos_result = None
    else:
        pos_result = min(pos_lst)
    return (neg_result, pos_result)