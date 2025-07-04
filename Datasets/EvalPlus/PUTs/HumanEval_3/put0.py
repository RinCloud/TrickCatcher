from typing import List


def below_zero(operations: List[int]) -> bool:
    """ You're given a list of deposit and withdrawal operations on a bank account that starts with
    zero balance. Your task is to detect if at any point the balance of account fallls below zero, and
    at that point function should return True. Otherwise it should return False.
    >>> below_zero([1, 2, 3])
    False
    >>> below_zero([1, 2, -4, 5])
    True
    """
    if not operations:
        return False
    balance_sum = sum(operations)
    if balance_sum == 0:
        return False
    if balance_sum < 0:
        return True

    for operation in operations:
        if operation < 0:
            continue
        balance_sum -= operation

    if balance_sum == 0:
        return False

    return True

