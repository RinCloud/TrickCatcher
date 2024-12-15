from typing import List
def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    scaled_numbers = []
    for num in numbers:
        scaled_num = (num - min_val) / (max_val - min_val)
        scaled_numbers.append(scaled_num)
    return scaled_numbers