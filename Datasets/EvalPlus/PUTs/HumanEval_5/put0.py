from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    """ Insert a number 'delimeter' between every two consecutive elements of input list `numbers'
    >>> intersperse([], 4)
    []
    >>> intersperse([1, 2, 3], 4)
    [1, 4, 2, 4, 3]
    """

    numbers.insert(0, 0)
    numbers.append(0)
    result = []

    for i in range(len(numbers) - 1):
        if numbers[i] != 0:
            result.append(numbers[i])
        if numbers[i] != 0 and numbers[i + 1] != 0:
            result.append(delimeter)

    return result

