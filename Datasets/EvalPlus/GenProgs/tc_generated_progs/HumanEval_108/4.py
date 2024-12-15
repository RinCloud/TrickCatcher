def count_nums(arr):
    count = 0
    for num in arr:
        signed_num = num
        if num < 0:
            signed_num = -num
        if sum(map(int, str(signed_num))) > 0:
            count += 1
    return count