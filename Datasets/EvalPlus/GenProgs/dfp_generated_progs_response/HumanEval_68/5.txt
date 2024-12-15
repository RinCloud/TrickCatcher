def pluck(arr):
    even_values = []
    for i, val in enumerate(arr):
        if val % 2 == 0:
            even_values.append(val)
    
    if len(even_values) == 0:
        return []
    
    smallest_value = min(even_values)
    smallest_index = arr.index(smallest_value)
    
    return [smallest_value, smallest_index]