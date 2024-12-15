def count_nums(arr):
    count = 0
    for num in arr:
        sum_digits = 0
        if num < 0:
            sum_digits -= 1
            num = abs(num)
        while num > 0:
            sum_digits += num % 10
            num = num // 10
        if sum_digits > 0:
            count += 1
    return count