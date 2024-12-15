from typing import List
def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    
    rescaled_numbers = []
    for num in numbers:
        rescaled_num = (num - min_val) / (max_val - min_val)
        rescaled_numbers.append(rescaled_num)
        
    return rescaled_numbers