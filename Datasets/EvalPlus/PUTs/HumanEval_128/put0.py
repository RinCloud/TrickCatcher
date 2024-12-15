
def prod_signs(arr):
    """
    You are given an array arr of integers and you need to return
    sum of magnitudes of integers multiplied by product of all signs
    of each number in the array, represented by 1, -1 or 0.
    Note: return None for empty arr.

    Example:
    >>> prod_signs([1, 2, 2, -4]) == -9
    >>> prod_signs([0, 1]) == 0
    >>> prod_signs([]) == None
    """
    if len(arr) == 0:
        return None
    else:
        # if all positive, return sum of all
        if all(x > 0 for x in arr):
            return sum(arr)
        # if all negative, return sum of all
        elif all(x < 0 for x in arr):
            return -sum(arr)
        # if all 0, return 0
        elif all(x == 0 for x in arr):
            return 0
        # if not all positive or negative or 0, return sum of abs(x) * product of signs
        else:
            product_signs = 1
            for i in range(len(arr)):
                if arr[i] > 0:
                    product_signs *= 1
                elif arr[i] < 0:
                    product_signs *= -1
                else:
                    product_signs *= 0
            return sum([abs(x) * product_signs for x in arr])

