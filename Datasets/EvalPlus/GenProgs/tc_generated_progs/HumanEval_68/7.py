def pluck(arr):
    if len(arr) == 0:
        return []
    min_even = float('inf')
    min_even_index = -1
    
    for index, value in enumerate(arr):
        if value % 2 == 0 and value < min_even:
            min_even = value
            min_even_index = index
    if min_even_index != -1:
        return [min_even, min_even_index]
    
    return []