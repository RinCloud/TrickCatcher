def intersection(interval1, interval2):
    # find the start and end point of the intersection
    intersection_start = max(interval1[0], interval2[0])
    intersection_end = min(interval1[1], interval2[1])
    # check if the intersection exists
    if intersection_start > intersection_end:
        return "NO"
    # calculate the length of the intersection
    length = intersection_end - intersection_start + 1
    # check if the length is a prime number
    if length < 2:
        return "NO"
    for i in range(2, int(length**0.5) + 1):
        if length % i == 0:
            return "NO"
    return "YES"