def order_by_points(nums):
    nums.sort(key=lambda x: (sum(map(int, str(abs(x)))), nums.index(x)))
    return nums