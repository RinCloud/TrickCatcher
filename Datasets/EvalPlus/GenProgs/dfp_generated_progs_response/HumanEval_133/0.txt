def sum_squares(lst):
    square_sum = 0
    
    for num in lst:
        ceil_num = math.ceil(num)
        square_num = ceil_num ** 2
        square_sum += square_num
        
    return square_sum