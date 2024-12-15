def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    """
    if n < 10:
        return 0
    elif n < 100:
        return 1
    
    else:
        nums = [x for x in range(1, n) if x % 11 == 0 or x % 13 == 0]
        return sum([str(x).count("7") for x in nums])