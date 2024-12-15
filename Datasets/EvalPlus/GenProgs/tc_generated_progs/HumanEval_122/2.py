def add_elements(arr, k):
    return sum(x for x in arr[:k] if x < 100) # Corrected implementation to sum only elements with at most two digits