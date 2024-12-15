def sort_array(array):
    if len(array) == 0:
        return array
    
    array_copy = array[:]
    first_index = array_copy[0]
    last_index = array_copy[-1]
    
    if (first_index + last_index) % 2 == 1:
        array_copy.sort()
        return array_copy
    else:
        array_copy.sort(reverse=True)
        return array_copy