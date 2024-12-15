import math
def sum_squares(lst):
    total = 0
    for num in lst:
        ceil_num = math.ceil(num)
        total += ceil_num ** 2
    return total