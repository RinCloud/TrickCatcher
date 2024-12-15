def pluck(arr):
    even_values = [num for num in arr if num % 2 == 0]
    if len(even_values) == 0:
        return []
    min_value = min(even_values)
    min_index = arr.index(min_value)
    return [min_value, min_index]