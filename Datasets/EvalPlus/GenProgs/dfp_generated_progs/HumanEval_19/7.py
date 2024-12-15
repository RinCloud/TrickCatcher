def sort_numbers(numbers: str) -> str:
    """ Sorts numbers in a space-delimited string from smallest to largest.
    
    Args:
        numbers (str): A space-delimited string of numberals from 'zero' to 'nine'
        
    Returns:
        str: The sorted string of numbers
        
    Examples:
        >>> sort_numbers('three one five')
        'one three five'
    """
    number_mapping = {
        'zero': 0,
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9
    }
    numbers = numbers.split()
    numbers.sort(key=lambda num: number_mapping[num])
    return ' '.join(numbers)