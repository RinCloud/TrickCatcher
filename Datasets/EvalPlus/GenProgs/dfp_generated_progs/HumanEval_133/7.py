def sum_squares(lst):
    total_sum = 0
    for num in lst:
        num = int(num) if num > 0 else int(num+0.5)
        total_sum += num*num
    return total_sum