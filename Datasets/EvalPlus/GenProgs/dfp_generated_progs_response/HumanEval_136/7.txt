def largest_smallest_integers(lst):
    negative_integers = [x for x in lst if x < 0]
    positive_integers = [x for x in lst if x > 0]
    
    if len(negative_integers) == 0:
        largest_negative = None
    else:
        largest_negative = max(negative_integers)
        
    if len(positive_integers) == 0:
        smallest_positive = None
    else:
        smallest_positive = min(positive_integers)
    
    return (largest_negative, smallest_positive)