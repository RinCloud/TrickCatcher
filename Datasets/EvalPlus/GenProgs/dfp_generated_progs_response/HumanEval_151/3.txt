def double_the_difference(lst):
    odd_squares_sum = 0
    
    for num in lst:
        if type(num) == int and num >= 0 and num % 2 != 0:
            odd_squares_sum += num * num
    
    return odd_squares_sum