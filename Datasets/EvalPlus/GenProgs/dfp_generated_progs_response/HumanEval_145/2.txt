def order_by_points(nums):
    return sorted(nums, key=lambda x: (sum(map(int, str(x))), nums.index(x)))