def specialFilter(nums):
    """
    This function takes an array of numbers as input and returns the number of elements in the array
    that are greater than 10 and both the first and last digits of the number are odd (1, 3, 5, 7, 9).
    
    Args:
    nums: A list of numbers.
    
    Returns:
    count: The number of elements in the array that meet the criteria.
    """
    count = 0
    for num in nums:
        if num > 10:
            digits = [int(digit) for digit in str(abs(num))]
            if digits[0] % 2 == 1 and digits[-1] % 2 == 1:
                count += 1
    return count