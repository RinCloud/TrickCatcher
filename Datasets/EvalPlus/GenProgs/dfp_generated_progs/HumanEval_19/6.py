def sort_numbers(numbers: str) -> str:
    """ Return the sorted numbers in the given string.
    
    The input is a space-delimited string of numberals from 'zero' to 'nine'.
    Valid choices are 'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight' and 'nine'.
    The function returns the string with numbers sorted from smallest to largest.
    
    Args:
    numbers (str): The space-delimited string of numberals.
    
    Returns:
    str: The sorted string of numbers.
    
    Examples:
    >>> sort_numbers('three one five')
    'one three five'
    """
    # Create a dictionary to map number names to their corresponding digits
    number_dict = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5,
                   'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    
    # Split the input string into a list of number names
    number_names = numbers.split()
    
    # Convert the number names to digits using the number_dict
    numbers = [number_dict[name] for name in number_names]
    
    # Sort the numbers in ascending order
    numbers.sort()
    
    # Convert the digits back to number names using the number_dict
    sorted_names = [key for value, key in sorted([(number_dict[name], name) for name in number_names])]
    
    # Join the sorted names into a string and return it
    return ' '.join(sorted_names)