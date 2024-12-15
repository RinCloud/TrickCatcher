def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    
    intersection_start = max(start1, start2)
    intersection_end = min(end1, end2)
    
    if intersection_start > intersection_end:
        return "NO"
    
    intersection_length = intersection_end - intersection_start + 1
    
    if intersection_length == 1:
        return "NO"
    
    if intersection_length < 0:
        intersection_length = -intersection_length
        
    for i in range(2, int(intersection_length ** 0.5) + 1):
        if intersection_length % i == 0:
            return "NO"
    
    return "YES"