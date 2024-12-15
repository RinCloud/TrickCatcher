def largest_smallest_integers(lst):
    negatives = [x for x in lst if x < 0]
    positives = [x for x in lst if x > 0]
    
    max_negative = max(negatives) if negatives else None
    min_positive = min(positives) if positives else None
    
    return (max_negative, min_positive)