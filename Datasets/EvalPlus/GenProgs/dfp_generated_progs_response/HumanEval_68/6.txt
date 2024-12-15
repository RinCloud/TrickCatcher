def pluck(arr):
    evens = [num for num in arr if num % 2 == 0]
    if evens:
        min_even = min(evens)
        min_even_index = arr.index(min_even)
        return [min_even, min_even_index]
    return []