def sum_squares(lst):
    sum_ = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            sum_ += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            sum_ += lst[i] ** 3
    return sum_