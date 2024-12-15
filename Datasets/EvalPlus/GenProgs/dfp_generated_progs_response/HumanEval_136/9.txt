def largest_smallest_integers(lst):
    negatives = [num for num in lst if num < 0]
    positives = [num for num in lst if num > 0]
    
    if len(negatives) == 0:
        largest_negative = None
    else:
        largest_negative = max(negatives)
        
    if len(positives) == 0:
        smallest_positive = None
    else:
        smallest_positive = min(positives)
    
    return (largest_negative, smallest_positive)