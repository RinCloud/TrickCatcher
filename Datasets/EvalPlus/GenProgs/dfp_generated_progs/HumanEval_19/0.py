def sort_numbers(numbers: str) -> str:
    """
    Sorts the numbers in the given string in ascending order.
    Args:
    numbers (str): A space-delimited string of numberals from 'zero' to 'nine'.
    Returns:
    str: The string with numbers sorted from smallest to largest.
    
    Example:
    >>> sort_numbers('three one five')
    'one three five'
    """
    num_dict = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9
    }
    return ' '.join(sorted(numbers.split(), key=lambda x: num_dict[x]))