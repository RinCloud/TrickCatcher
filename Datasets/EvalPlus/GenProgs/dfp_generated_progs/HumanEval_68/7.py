def pluck(arr):
    even_values = []
    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            even_values.append(arr[i])
    
    if len(even_values) == 0:
        return []
    else:
        smallest_even = min(even_values)
        smallest_index = arr.index(smallest_even)
        return [smallest_even, smallest_index]