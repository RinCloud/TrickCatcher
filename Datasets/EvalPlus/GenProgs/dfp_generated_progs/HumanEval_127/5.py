def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    
    # finding the start and end points of the intersection
    start_intersection = max(start1, start2)
    end_intersection = min(end1, end2)
    
    # check if there is an intersection
    if start_intersection <= end_intersection:
        # calculate the length of the intersection
        length_intersection = end_intersection - start_intersection + 1
        
        # check if the length of the intersection is a prime number
        if length_intersection > 1:
            for i in range(2, int(length_intersection**0.5) + 1):
                if length_intersection % i == 0:
                    return "NO"
            return "YES"
        else:
            return "NO"
    else:
        return "NO"