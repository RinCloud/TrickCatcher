def triples_sum_to_zero(l: list):
    """
    triples_sum_to_zero takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.
    """
    # sort the list
    l.sort()
    
    # loop through each element in the sorted list
    for i in range(len(l)-2):
        # set two pointers, one at the next element after i and the other at the end of the list
        left = i + 1
        right = len(l) - 1
        
        # check if sum of three elements is zero
        while left < right:
            if l[i] + l[left] + l[right] == 0:
                return True
            elif l[i] + l[left] + l[right] < 0:
                # if the sum is less than zero, move the left pointer to the right
                left += 1
            else:
                # if the sum is greater than zero, move the right pointer to the left
                right -= 1
                
    # if no three elements sum up to zero, return False
    return False