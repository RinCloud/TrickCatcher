def specialFilter(nums):
    count = 0
    for num in nums:
        first_digit = int(str(abs(num))[0])
        last_digit = abs(num) % 10
        if num > 10 and first_digit % 2 != 0 and last_digit % 2 != 0:
            count += 1
    return count