def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n"""
    largest = 1
    for i in range(2, n):
        if n % i == 0:
            largest = i
    return largest