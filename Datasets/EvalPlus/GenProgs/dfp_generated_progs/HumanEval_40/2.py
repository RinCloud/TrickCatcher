def triples_sum_to_zero(l: list):
    # sort the list in ascending order
    l.sort()
    # iterate through the list
    for i in range(len(l) - 2):
        # initialize two pointers, left and right
        left = i + 1
        right = len(l) - 1
        # iterate while left pointer is less than right pointer
        while left < right:
            # calculate the sum of three elements
            sum_of_three = l[i] + l[left] + l[right]
            # check if sum is zero
            if sum_of_three == 0:
                return True
            # if sum is positive, decrease the right pointer
            elif sum_of_three > 0:
                right -= 1
            # if sum is negative, increase the left pointer
            else:
                left += 1
    # if no triplet with sum zero is found, return False
    return False