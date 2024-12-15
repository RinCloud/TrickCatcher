from typing import List, Tuple
def rolling_max(numbers: List[int]) -> List[int]:
    """ From a given list of integers, generate a list of rolling maximum element found until given moment
    in the sequence.
    >>> rolling_max([1, 2, 3, 2, 3, 4, 2])
    [1, 2, 3, 3, 3, 4, 4]
    """
    max_so_far = float('-inf') # Updated to negative infinity to handle negative numbers
    result = []
    for n in numbers:
        if n > max_so_far:
            max_so_far = n
        result.append(max_so_far)
    return result