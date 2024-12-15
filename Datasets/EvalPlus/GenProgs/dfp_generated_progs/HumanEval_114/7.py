def minSubArraySum(nums):
    """
    Given an array of integers nums, find the minimum sum of any non-empty sub-array
    of nums.
    Example
    minSubArraySum([2, 3, 4, 1, 2, 4]) == 1
    minSubArraySum([-1, -2, -3]) == -6
    """
    if not nums:
        return 0
    min_sum = float('inf')
    curr_sum = 0
    for num in nums:
        curr_sum = min(curr_sum + num, num)
        min_sum = min(min_sum, curr_sum)
    return min_sum