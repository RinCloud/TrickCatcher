def pairs_sum_to_zero(l):
    for i, num in enumerate(l):
        if -num in l[i+1:]:
            return True
    return False