def pluck(arr):
    even_values = []
    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            even_values.append(arr[i])
    if len(even_values) == 0:
        return []
    else:
        min_even_value = min(even_values)
        min_even_value_index = arr.index(min_even_value)
        return [min_even_value, min_even_value_index]