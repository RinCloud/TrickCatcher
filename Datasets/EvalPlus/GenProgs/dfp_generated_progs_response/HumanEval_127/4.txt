def intersection(interval1, interval2):
    """You are given two intervals,
    where each interval is a pair of integers. For example, interval = (start, end) = (1, 2).
    The given intervals are closed which means that the interval (start, end)
    includes both start and end.
    For each given interval, it is assumed that its start is less or equal its end.
    Your task is to determine whether the length of intersection of these two 
    intervals is a prime number.
    Example, the intersection of the intervals (1, 3), (2, 4) is (2, 3)
    which its length is 1, which not a prime number.
    If the length of the intersection is a prime number, return "YES",
    otherwise, return "NO".
    If the two intervals don't intersect, return "NO".
    """
    
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                return False
        return True
    
    start1, end1 = interval1
    start2, end2 = interval2
    
    # Check if the intervals don't intersect
    if end1 < start2 or end2 < start1:
        return "NO"
    
    # Find the intersection length
    intersection_len = min(end1, end2) - max(start1, start2) + 1
    
    # Check if the intersection length is a prime number
    if is_prime(intersection_len):
        return "YES"
    else:
        return "NO"