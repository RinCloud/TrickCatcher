def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    
    if end1 < start2 or end2 < start1:  # interval1 is completely before or after interval2
        return "NO"
    
    min_end = min(end1, end2)
    max_start = max(start1, start2)
    
    intersection_length  = min_end - max_start + 1
    
    if intersection_length <= 1:  # intersection length is 0 or 1
        return "NO"
    
    for i in range(2, int(intersection_length ** 0.5) + 1):
        if intersection_length % i == 0:
            return "NO"
    
    return "YES"