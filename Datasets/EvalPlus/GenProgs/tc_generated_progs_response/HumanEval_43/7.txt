def pairs_sum_to_zero(l):
    """
    pairs_sum_to_zero takes a list of integers as an input.
    it returns True if there are two distinct elements in the list that
    sum to zero, and False otherwise.
    >>> pairs_sum_to_zero([1, 3, 5, 0])
    False
    >>> pairs_sum_to_zero([1, 3, -2, 1])
    False
    >>> pairs_sum_to_zero([1, 2, 3, 7])
    False
    >>> pairs_sum_to_zero([2, 4, -5, 3, 5, 7])
    True
    >>> pairs_sum_to_zero([1])
    False
    """
    l = list(set(l))  # Removing duplicates to handle cases like [1, 1, 1, -1, -1]
    l.sort()
    left = 0
    right = len(l)-1
    while left < right:
        if l[left] + l[right] == 0:
            return True
        if l[left] + l[right] > 0:
            right -= 1
        else:
            left += 1
    return False