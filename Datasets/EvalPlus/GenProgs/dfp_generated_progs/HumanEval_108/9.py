def count_nums(arr):
    count = 0
    for num in arr:
        if sum(int(digit) for digit in str(abs(num))) > 0:
            count += 1
    return count