import math
def sum_squares(lst):
    sum_squares = 0
    for num in lst:
        ceil_num = math.ceil(num)
        squared_num = ceil_num ** 2
        sum_squares += squared_num
    return sum_squares