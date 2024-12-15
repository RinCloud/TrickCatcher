def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    
    # Find the start and end values of the intersection
    start = max(start1, start2)
    end = min(end1, end2)
    
    # If the start value is greater than the end value, there is no intersection
    if start > end:
        return "NO"
    
    # Find the length of the intersection
    length = end - start + 1
    
    # Check if the length is a prime number
    if length > 1:
        for i in range(2, int(length/2) + 1):
            if length % i == 0:
                return "NO"
    return "YES"