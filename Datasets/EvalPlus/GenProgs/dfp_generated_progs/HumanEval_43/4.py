def pairs_sum_to_zero(l):
    # iterate through the list
    for i in range(len(l)):
        # check if the negation of the element exists in the list
        if -l[i] in l[i+1:]:
            return True
    return False