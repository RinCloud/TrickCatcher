def pluck(arr):
    even_values = [num for num in arr if num % 2 == 0]
    if len(even_values) == 0:
        return []
    smallest_even = min(even_values)
    smallest_even_index = arr.index(smallest_even)
    return [smallest_even, smallest_even_index]