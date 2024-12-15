def pairs_sum_to_zero(l):
    unique_elements = set(l)
    for num in unique_elements:
        if -num in unique_elements:
            return True
    return False