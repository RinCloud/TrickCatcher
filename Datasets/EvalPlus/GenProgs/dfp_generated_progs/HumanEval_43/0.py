def pairs_sum_to_zero(l):
    s = set()
    for num in l:
        if -num in s:
            return True
        s.add(num)
    return False