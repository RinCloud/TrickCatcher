def double_the_difference(lst):
    return sum([x**2 for x in lst if x % 2 == 1 and x >= 0])