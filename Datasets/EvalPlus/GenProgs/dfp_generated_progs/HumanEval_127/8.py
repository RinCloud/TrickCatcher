def intersection(interval1, interval2):
    """Return whether the length of intersection of two intervals is a prime number."""
    start1 = interval1[0]
    end1 = interval1[1]
    start2 = interval2[0]
    end2 = interval2[1]
    
    # Find the intersection interval
    intersection_start = max(start1, start2)
    intersection_end = min(end1, end2)
    
    # If the intersection interval is empty or negative, return "NO"
    if intersection_start > intersection_end:
        return "NO"
    
    # Calculate the length of the intersection interval
    length = intersection_end - intersection_start + 1
    
    # Check if the length is a prime number
    if length < 2:
        return "NO"
    for i in range(2, int(length ** 0.5) + 1):
        if length % i == 0:
            return "NO"
    
    return "YES"