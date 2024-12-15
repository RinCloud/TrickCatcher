def sort_third(l):
    non_divisible_indices = [i for i in range(len(l)) if i % 3 != 0]
    divisible_indices = [i for i in range(len(l)) if i % 3 == 0]
    sorted_third_values = sorted([l[i] for i in divisible_indices])
    for i in range(len(divisible_indices)):
        l[divisible_indices[i]] = sorted_third_values[i]
    return l