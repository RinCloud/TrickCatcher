def sort_array(array):
    if len(array) == 0:
        return []
    
    first_index = array[0]
    last_index = array[-1]
    
    if (first_index + last_index) % 2 == 0:
        return sorted(array, reverse=True)
    else:
        return sorted(array)