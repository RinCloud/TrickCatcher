def is_equal_to_sum_even(n):
    evens = []
    for i in range(1, n+1, 2):
        if sum(evens) + i == n:
            return True
        evens.append(i)
    return False