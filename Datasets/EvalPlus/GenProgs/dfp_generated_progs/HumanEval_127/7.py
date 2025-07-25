import math
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
    [input/output] samples:
    intersection((1, 2), (2, 3)) ==> "NO"
    intersection((-1, 1), (0, 4)) ==> "NO"
    intersection((-3, -1), (-5, 5)) ==> "YES"
    """
    interval1_length = interval1[1] - interval1[0] + 1
    interval2_length = interval2[1] - interval2[0] + 1
    
    intersection_start = max(interval1[0], interval2[0])
    intersection_end = min(interval1[1], interval2[1])
    intersection_length = intersection_end - intersection_start + 1
    
    if intersection_length <= 0:
        return "NO"
    
    if intersection_length == 1:
        return "YES"
    
    is_prime = True
    for i in range(2, int(math.sqrt(intersection_length)) + 1):
        if intersection_length % i == 0:
            is_prime = False
            break
    
    if is_prime:
        return 'YES'
    else:
        return 'NO'