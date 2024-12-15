def order_by_points(nums):
    nums.sort(key=lambda x:(sum(int(c) for c in str(x)), nums.index(x)))
    return nums