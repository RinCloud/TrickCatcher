from math import ceil
def sum_squares(lst):
    sum_sq = 0
    for num in lst:
        ceil_num = ceil(num)
        sum_sq += ceil_num**2
    return sum_sq