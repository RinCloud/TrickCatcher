def pluck(arr):
    if len(arr) == 0:
        return []
    even_nodes = [node for node in arr if node % 2 == 0]
    
    if len(even_nodes) == 0:
        return []
    min_even_value = min(even_nodes)
    min_even_index = arr.index(min_even_value)
    return [min_even_value, min_even_index]