def specialFilter(nums):
    """
    Return the number of elements in the array that are greater than 10 and both 
    first and last digits of a number are odd.
    Parameters:
    nums (list): A list of numbers.
    Returns:
    int: The number of elements that meet the specified conditions.
    """
    count = 0
    for num in nums:
        if num > 10:
            str_num = str(num)
            if int(str_num[0]) % 2 != 0 and int(str_num[-1]) % 2 != 0:
                count += 1
    return count