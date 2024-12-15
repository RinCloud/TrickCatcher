def sort_array(array):
    if len(array) == 0:
        return array
    if len(array) == 1:
        return array
    # Copy the array
    array_copy = array[:]
    # If sum of first and last index is odd, sort in ascending order
    if (array_copy[0] + array_copy[-1]) % 2 == 1:
        return sorted(array_copy)
    # If sum of first and last index is even, sort in descending order
    else:
        return sorted(array_copy, reverse=True)