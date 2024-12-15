def triples_sum_to_zero(l: list):
    """
    triples_sum_to_zero takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.
    >>> triples_sum_to_zero([1, 3, 5, 0])
    False
    >>> triples_sum_to_zero([1, 3, -2, 1])
    True
    >>> triples_sum_to_zero([1, 2, 3, 7])
    False
    >>> triples_sum_to_zero([2, 4, -5, 3, 9, 7])
    True
    >>> triples_sum_to_zero([1])
    False
    """
    seen = set()
    l.sort()
    for i in range(len(l)):
        start = i + 1
        end = len(l) - 1
        while start < end:
            total = l[i] + l[start] + l[end]
            if total == 0:
                return True
            elif total < 0:
                start += 1
            else:
                end -= 1
    return False