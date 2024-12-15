def pluck(arr):
    if len(arr) == 0:
        return []
    even_nodes = [node for node in arr if node % 2 == 0]
    if len(even_nodes) == 0:
        return []
    min_value = min(even_nodes)
    min_index = arr.index(min_value)
    return [min_value, min_index]