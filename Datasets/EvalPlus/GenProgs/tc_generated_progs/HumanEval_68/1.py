def pluck(arr):
    if not arr:
        return []
    even_values = [i for i in arr if i % 2 == 0]
    if not even_values:
        return []
    min_even_value = min(even_values)
    return [min_even_value, arr.index(min_even_value)]