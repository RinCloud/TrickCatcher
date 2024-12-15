def sum_squares(lst):
    sum = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            sum += lst[i]**2
        elif i % 4 == 0:
            sum += lst[i]**3
    return sum