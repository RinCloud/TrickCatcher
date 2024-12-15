def intersection(interval1, interval2):
    # Find the intersection range of the two intervals
    start = max(interval1[0], interval2[0])
    end = min(interval1[1], interval2[1])
    
    # Check if the intersection is valid
    if start > end:
        return "NO"
    
    # Find the length of the intersection
    length = end - start + 1
    
    # Check if the length of the intersection is a prime number
    if length < 2:
        return "NO"
    for i in range(2, int(length/2) + 1):
        if length % i == 0:
            return "NO"
    return "YES"