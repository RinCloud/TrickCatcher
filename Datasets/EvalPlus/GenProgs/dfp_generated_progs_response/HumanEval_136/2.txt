def largest_smallest_integers(lst):
    positive_integers = []
    negative_integers = []
    
    for num in lst:
        if num > 0:
            positive_integers.append(num)
        elif num < 0:
            negative_integers.append(num)
    
    if len(positive_integers) == 0:
        smallest_positive = None
    else:
        smallest_positive = min(positive_integers)
    
    if len(negative_integers) == 0:
        largest_negative = None
    else:
        largest_negative = max(negative_integers)
    
    return (largest_negative, smallest_positive)