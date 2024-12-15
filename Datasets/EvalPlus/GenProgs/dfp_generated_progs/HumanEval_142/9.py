def sum_squares(lst):
    sum = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            lst[i] = lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            lst[i] = lst[i] ** 3
        sum += lst[i]
    return sum