def specialFilter(nums):
    """
    Takes an array of numbers as input and returns the number of elements in the array that are greater than 10 and both the first and last digits of a number are odd (1, 3, 5, 7, 9).
    Args:
    nums (list): List of numbers
    Returns:
    int: Number of elements in the array that satisfy the conditions.
    """
    count = 0
    for num in nums:
        if num > 10:
            num_str = str(num)
            if int(num_str[0]) % 2 != 0 and int(num_str[-1]) % 2 != 0:
                count += 1
    return count