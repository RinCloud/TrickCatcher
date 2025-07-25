def sort_numbers(numbers: str) -> str:
    """ Sorts a space-delimited string of numbers from 'zero' to 'nine' in ascending order.
    Args:
        numbers: A space-delimited string of numberals from 'zero' to 'nine'.
    Returns:
        The string with numbers sorted from smallest to largest.
    """
    num_dict = {
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
    numbers_list = numbers.split()
    sorted_numbers_list = sorted(numbers_list, key=lambda x: num_dict[x])
    sorted_numbers_str = ' '.join(sorted_numbers_list)
    return sorted_numbers_str