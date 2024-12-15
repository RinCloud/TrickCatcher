def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n """
    for i in range(n-1, 0, -1):  # iterate from n-1 to 1 in descending order
        if n % i == 0:  # check if i divides n evenly
            return i  # return the largest divisor
    return None  # return None if no divisor is found