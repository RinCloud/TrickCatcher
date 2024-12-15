def sort_array(array):
    if len(array) == 0:
        return []
    else:
        copied_array = array.copy()
        if (array[0] + array[len(array) - 1]) % 2 == 0:
            copied_array.sort(reverse=True)
        else:
            copied_array.sort()
        return copied_array