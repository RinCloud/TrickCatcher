def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = [l[i] for i in even_indices]
    even_values.sort()
    result = []
    for i, value in enumerate(l):
        if i % 2 == 0:
            result.append(even_values.pop(0))
        else:
            result.append(value)
    return result