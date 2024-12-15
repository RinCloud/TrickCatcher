import math
def minSubArraySum(nums):
    if len(nums) == 1:
        return nums[0]
    else:
        min_sum = math.inf
        for i in range(len(nums)):
            temp_sum = 0
            for j in range(i, len(nums)):
                temp_sum += nums[j]
                min_sum = min(min_sum, temp_sum)
        return min_sum