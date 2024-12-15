from math import pow
def starts_one_ends(n):
    count = pow(10, n-1) - pow(9, n)
    return int(count)