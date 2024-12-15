def sort_array(array):
    """
    Given an array of non-negative integers, return a copy of the given array after sorting,
    you will sort the given array in ascending order if the sum( first index value, last index value) is odd,
    or sort it in descending order if the sum( first index value, last index value) is even.
    Note:
    * don't change the given array.
    Examples:
    * sort_array([]) => []
    * sort_array([5]) => [5]
    * sort_array([2, 4, 3, 0, 1, 5]) => [0, 1, 2, 3, 4, 5]
    * sort_array([2, 4, 3, 0, 1, 5, 6]) => [6, 5, 4, 3, 2, 1, 0]
    """
    if len(array) == 0:
        return array
    if len(array) == 1:
        return array
    # Copy the array
    array_copy = array[:]
    # If sum of first and last index is odd, sort in ascending order
    if (array_copy[0] + array_copy[-1]) % 2 == 1:
        array_copy.sort()
        return array_copy
    # If sum of first and last index is even, sort in descending order
    else:
        array_copy.sort(reverse=True)
        return array_copy