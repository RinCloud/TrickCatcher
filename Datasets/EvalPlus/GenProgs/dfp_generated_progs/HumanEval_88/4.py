def sort_array(array):
    sorted_array = list(array)
    if len(sorted_array) <= 1:
        return sorted_array
    else:
        if (sorted_array[0] + sorted_array[-1]) % 2 == 0:
            sorted_array.sort(reverse=True)
        else:
            sorted_array.sort()
    return sorted_array