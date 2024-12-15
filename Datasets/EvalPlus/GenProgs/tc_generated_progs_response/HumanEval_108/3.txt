def count_nums(arr):
    count = 0
    for num in arr:
        if num < 0:
            num = -num
            while num != 0:
                digit = num % 10
                if digit < 0:
                    digit = -digit
                if digit > 0:
                    count += 1
                num = num // 10
        else:
            while num != 0:
                digit = num % 10
                if digit > 0:
                    count += 1
                num = num // 10
    return count