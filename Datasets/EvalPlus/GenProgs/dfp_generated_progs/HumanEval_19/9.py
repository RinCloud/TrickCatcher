def sort_numbers(numbers: str) -> str:
    """ Input is a space-delimited string of numberals from 'zero' to 'nine'.
    Valid choices are 'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight' and 'nine'.
    Return the string with numbers sorted from smallest to largest
    >>> sort_numbers('three one five')
    'one three five'
    """
    number_dict = {
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
    # Split the numbers string into a list
    number_list = numbers.split()
    # Convert the number words to integers for sorting
    sorted_list = [number_dict[num] for num in number_list]
    # Sort the list of numbers
    sorted_list.sort()
    # Convert the sorted list back to number words
    sorted_numbers = [number for number in sorted_list]
    # Join the sorted number words back into a string
    return ' '.join(sorted_numbers)