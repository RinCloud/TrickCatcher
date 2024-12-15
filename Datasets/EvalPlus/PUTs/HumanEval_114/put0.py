import math

def minSubArraySum(nums):
    """
    Given an array of integers nums, find the minimum sum of any non-empty sub-array
    of nums.
    Example
    minSubArraySum([2, 3, 4, 1, 2, 4]) == 1
    minSubArraySum([-1, -2, -3]) == -6
    """
    if len(nums) == 1:
        return nums[0]
    elif len(nums) == 2:
        return min(nums[0], nums[1])
    else:
        min_sum = math.inf
        for i in range(len(nums)):
            for j in range(i + 1, len(nums) + 1):
                min_sum = min(min_sum, sum(nums[i:j]))
        return min_sum

