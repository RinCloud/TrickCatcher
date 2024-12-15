def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n """
    for i in range(n-1, 1, -1):  # start from n-1 and iterate backwards
        if n % i == 0:  # if i divides n evenly
            return i  # return i as the largest divisor
    return 1  # return 1 if no other divisor found