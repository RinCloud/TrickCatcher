def starts_one_ends(n):
    count = 0
    if n < 1:
        return count
    elif n == 1:
        return 1
    else:
        count = 2 * (9 ** (n-1))
        return count