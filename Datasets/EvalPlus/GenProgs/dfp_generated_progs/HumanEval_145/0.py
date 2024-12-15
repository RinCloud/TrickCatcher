def order_by_points(nums):
    return sorted(nums, key=lambda x: (sum([int(digit) for digit in str(x)]), nums.index(x)))