def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    """
    count = 0
    for num in range(1, n):
        if num % 11 == 0 or num % 13 == 0:
            if '7' in str(num):
                count += 1
    return count