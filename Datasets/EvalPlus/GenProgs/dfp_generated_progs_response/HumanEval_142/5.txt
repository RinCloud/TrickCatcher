def sum_squares(lst):
    sum = 0
    for i, num in enumerate(lst):
        if i % 3 == 0:
            sum += num ** 2
        elif i % 4 == 0 and i % 3 != 0:
            sum += num ** 3
    return sum