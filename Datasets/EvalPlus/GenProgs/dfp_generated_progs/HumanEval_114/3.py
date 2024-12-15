def minSubArraySum(nums):
    min_sum = float('inf')
    curr_sum = 0
    
    for num in nums:
        curr_sum = min(num, curr_sum + num)
        min_sum = min(min_sum, curr_sum)
    
    return min_sum