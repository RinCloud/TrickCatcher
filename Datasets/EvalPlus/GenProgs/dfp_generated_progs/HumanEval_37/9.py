def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    sorted_even_values = sorted([l[i] for i in even_indices])
    sorted_list = [l[i] if i % 2 != 0 else sorted_even_values.pop(0) for i in range(len(l))]
    return sorted_list