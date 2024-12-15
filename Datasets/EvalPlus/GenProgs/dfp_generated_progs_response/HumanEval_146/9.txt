def specialFilter(nums):
    """Returns the count of numbers that are greater than 10 and have both the first and last digits as odd numbers."""
    
    count = 0
    for num in nums:
        if num > 10 and str(num)[0] in ['1', '3', '5', '7', '9'] and str(num)[-1] in ['1', '3', '5', '7', '9']:
            count += 1
    return count