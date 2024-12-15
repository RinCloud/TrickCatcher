def specialFilter(nums):
    """
    Returns the number of elements in the array that are greater than 10 
    and both first and last digits of a number are odd (1, 3, 5, 7, 9).
    
    Args:
    nums : list : input list of numbers
    
    Returns:
    count : int : number of elements in the array that satisfy the condition
    
    Example:
    >>> specialFilter([15, -73, 14, -15])
    1
    >>> specialFilter([33, -2, -3, 45, 21, 109])
    2
    """
    
    count = 0
    for num in nums:
        if num > 10:
            str_num = str(num)
            if int(str_num[0]) % 2 != 0 and int(str_num[-1]) % 2 != 0:
                count += 1
    
    return count