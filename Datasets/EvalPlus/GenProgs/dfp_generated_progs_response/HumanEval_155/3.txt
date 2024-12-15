def even_odd_count(num):
    """
    Given an integer, return a tuple that has the number of even and odd digits respectively.
    """
    even_count = 0
    odd_count = 0
    num = abs(num)  # convert negative numbers to positive
    
    while num > 0:
        digit = num % 10  # get the last digit
        if digit % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
        num = num // 10  # remove the last digit
    
    return (even_count, odd_count)