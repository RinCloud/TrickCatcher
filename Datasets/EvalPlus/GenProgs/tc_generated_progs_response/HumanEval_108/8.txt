def count_nums(arr):
    count = 0
    for num in arr:
        if num < 0:
            num = -num
        if sum(map(int, str(num))) > 0:
            count += 1
    return count