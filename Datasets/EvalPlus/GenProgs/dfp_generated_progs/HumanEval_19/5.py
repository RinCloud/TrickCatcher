def sort_numbers(numbers: str) -> str:
    numbers_dict = {
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
    numbers_list.sort(key=lambda x: numbers_dict[x])
    return ' '.join(numbers_list)