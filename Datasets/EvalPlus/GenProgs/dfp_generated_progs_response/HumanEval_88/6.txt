def sort_array(array):
    # Create a copy of the given array
    sorted_array = array.copy()
    
    # Check if the sum of the first and last index of the array is even or odd
    if (sorted_array[0] + sorted_array[-1]) % 2 == 0:
        # Sort the array in descending order
        sorted_array.sort(reverse=True)
    else:
        # Sort the array in ascending order
        sorted_array.sort()
    
    return sorted_array