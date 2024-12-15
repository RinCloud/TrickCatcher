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
        # single digit numbers divisible by 11 or 13 always contain a 7
        if n % 11 == 0 or n % 13 == 0:
            return 1
        else:
            return 0
    count = 0
    for x in range(1, n):
        if x % 11 == 0 or x % 13 == 0:
            count += str(x).count("7")
    return count