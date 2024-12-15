def sort_numbers(numbers: str) -> str:
    """Sorts a space-delimited string of numberals from 'zero' to 'nine' in ascending order.
    Args:
    numbers: A string of space-delimited numberals from 'zero' to 'nine'.
    Returns:
    A string with numbers sorted from smallest to largest.
    Examples:
    >>> sort_numbers('three one five')
    'one three five'
    """
    number_dict = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5, 
                   'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    num_list = numbers.split()
    sorted_list = sorted(num_list, key=lambda x: number_dict[x])
    return ' '.join(sorted_list)