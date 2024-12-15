def intersection(interval1, interval2):
    if interval1[0] > interval1[1] or interval2[0] > interval2[1]:
        return "NO"
    elif interval1[1] < interval2[0] or interval2[1] < interval1[0]:
        return "NO"
    else:
        start = max(interval1[0], interval2[0])
        end = min(interval1[1], interval2[1])
        if (end - start) <= 1:
            return "NO"
        length = end - start
        prime = True
        if length <= 1:
            return "NO"
        for i in range(2, length):
            if length % i == 0:
                prime = False
                break
        if prime:
            return "YES"
        else:
            return "NO"