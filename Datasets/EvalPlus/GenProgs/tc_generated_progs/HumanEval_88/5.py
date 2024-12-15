def sort_array(array):
    if len(array) == 0:
        return array
    if len(array) == 1:
        return array
    
    array_copy = array[:]
    
    if (array_copy[0] + array_copy[-1]) % 2 == 1:
        array_copy.sort()
        return array_copy
    else:
        array_copy.sort(reverse=True)
        return array_copy