def minSubArraySum(nums):
    # Initialize the variables
    min_sum = float('inf')  # To store the minimum sum
    curr_sum = 0  # To store the current sum of the sub-array
    
    # Iterate through the array
    for num in nums:
        # If the current sum becomes negative, reset it to 0
        if curr_sum < 0:
            curr_sum = 0
        # Update the current sum by adding the current element
        curr_sum += num
        # Update the minimum sum if necessary
        if curr_sum < min_sum:
            min_sum = curr_sum
    
    # Return the minimum sum
    return min_sum