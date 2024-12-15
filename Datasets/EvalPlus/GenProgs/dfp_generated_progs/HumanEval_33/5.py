def sort_third(l: list):
    lst = l.copy()
    divisible_by_three = [i for i in range(len(lst)) if i % 3 == 0]
    values = [lst[i] for i in divisible_by_three]
    sorted_values = sorted(values)
    for i, value in zip(divisible_by_three, sorted_values):
        lst[i] = value
    return lst