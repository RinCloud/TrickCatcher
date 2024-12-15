def largest_smallest_integers(lst):
    neg_integers = []
    pos_integers = []
    for num in lst:
        if num < 0:
            neg_integers.append(num)
        elif num > 0:
            pos_integers.append(num)
    largest_neg = None
    smallest_pos = None
    if neg_integers:
        largest_neg = max(neg_integers)
    if pos_integers:
        smallest_pos = min(pos_integers)
    return (largest_neg, smallest_pos)