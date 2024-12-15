from typing import List
def sort_numbers(numbers: str) -> str:
    """ Input is a space-delimited string of numericals from 'zero' to 'nine'.
    Valid choices are 'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight' and 'nine'.
    Return the string with numbers sorted from smallest to largest
    >>> sort_numbers('three one five')
    'one three five'
    """
    num_dict = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    numbers = [num_dict[num] for num in numbers.split()]
    numbers.sort()
    return ' '.join([key for key, value in sorted(num_dict.items(), key=lambda x: x[1]) if value in numbers])