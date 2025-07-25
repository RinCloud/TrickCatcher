def minSubArraySum(nums):
    min_sum = nums[0]
    current_sum = nums[0]
    for i in range(1, len(nums)):
        current_sum = min(nums[i], current_sum + nums[i])
        min_sum = min(min_sum, current_sum)
    return min_sum