def largest_smallest_integers(lst):
    negative_integers = [x for x in lst if x < 0]
    positive_integers = [x for x in lst if x > 0]
    
    largest_negative = None
    smallest_positive = None
    
    if negative_integers:
        largest_negative = max(negative_integers)
        
    if positive_integers:
        smallest_positive = min(positive_integers)
        
    return (largest_negative, smallest_positive)