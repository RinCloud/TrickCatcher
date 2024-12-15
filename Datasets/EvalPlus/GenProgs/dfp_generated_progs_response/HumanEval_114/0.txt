def minSubArraySum(nums):
    """
    Given an array of integers nums, find the minimum sum of any non-empty sub-array
    of nums.
    
    Args:
    nums (List[int]): The input array of integers
    
    Returns:
    int: The minimum sum of any non-empty sub-array of nums
    
    Example:
    >>> minSubArraySum([2, 3, 4, 1, 2, 4])
    1
    >>> minSubArraySum([-1, -2, -3])
    -6
    """
    if len(nums) == 0:
        return 0
    
    min_sum = nums[0]
    curr_sum = nums[0]
    
    for i in range(1, len(nums)):
        curr_sum = min(nums[i], curr_sum + nums[i])
        min_sum = min(min_sum, curr_sum)
    
    return min_sum