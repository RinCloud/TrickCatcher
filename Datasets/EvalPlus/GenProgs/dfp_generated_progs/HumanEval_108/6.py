def count_nums(arr):
    count = 0
    for num in arr:
        sum_of_digits = sum(int(digit) for digit in str(abs(num)))
        if sum_of_digits > 0:
            count += 1
    return count