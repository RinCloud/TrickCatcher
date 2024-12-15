def specialFilter(nums):
    count = 0
    for num in nums:
        if num > 10:
            digits = [int(d) for d in str(abs(num)) if d.isdigit()]
            if digits[0] % 2 != 0 and digits[-1] % 2 != 0:
                count += 1
    return count