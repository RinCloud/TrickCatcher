def largest_smallest_integers(lst):
    positives = []
    negatives = []
    
    for num in lst:
        if num > 0:
            positives.append(num)
        elif num < 0:
            negatives.append(num)
    
    max_negative = None
    min_positive = None
    
    if negatives:
        max_negative = max(negatives)
        
    if positives:
        min_positive = min(positives)
        
    return (max_negative, min_positive)