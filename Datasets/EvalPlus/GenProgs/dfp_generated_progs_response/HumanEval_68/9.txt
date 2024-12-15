def pluck(arr):
    even_values = []
    for index, value in enumerate(arr):
        if value % 2 == 0:
            even_values.append((value, index))
    if len(even_values) == 0:
        return []
    even_values.sort()
    return [even_values[0][0], even_values[0][1]]