def even_odd_count(num):
    even_count = 0
    odd_count = 0
    if num < 0:
        num = -1 * num
    num_str = str(num)
    for x in num_str:
        if int(x) % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    return even_count, odd_count