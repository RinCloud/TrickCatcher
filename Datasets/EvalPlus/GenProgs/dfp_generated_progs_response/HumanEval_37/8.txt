def sort_even(l: list):
    even_indicies = [i for i in range(len(l)) if i % 2 == 0]
    even_values = [l[i] for i in even_indicies]
    sorted_even_values = sorted(even_values)
    sorted_l = l.copy()
    for i in range(len(even_indicies)):
        sorted_l[even_indicies[i]] = sorted_even_values[i]
    return sorted_l