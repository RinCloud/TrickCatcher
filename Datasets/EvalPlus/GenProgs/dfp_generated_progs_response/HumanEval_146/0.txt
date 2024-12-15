def specialFilter(nums):
    """
    Function to count the number of elements in the array that are 
    greater than 10 and both first and last digits of a number are odd.
    
    Parameters:
    nums (list): List of numbers
    
    Returns:
    count (int): Number of elements that satisfy the conditions
    
    Examples:
    >>> specialFilter([15, -73, 14, -15])
    1
    >>> specialFilter([33, -2, -3, 45, 21, 109])
    2
    """
    
    count = 0
    for num in nums:
        if num > 10 and str(num)[0] in ['1', '3', '5', '7', '9'] and str(num)[-1] in ['1', '3', '5', '7', '9']:
            count += 1
            
    return count