def count_nums(arr):
    count = 0
    for num in arr:
        if num < 0:
            num = -num
            while num != 0:
                last_digit = num % 10
                if last_digit != 0:
                    count += 1
                    break
                num //= 10
        else:
            if sum(map(int, str(num))) > 0:
                count += 1
    return count